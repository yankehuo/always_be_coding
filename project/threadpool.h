#ifndef THREAD_POOL
#define THREAD_POOL

#include <cassert>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <thread>
//
#include <funcitonal>

class ThreadPool {
private:
	struct Pool {
		std::mutex mtx;
		std::condition_variable cond;
		queue<function<void()>> tasks;
		bool isclosed;
	};
	shared_ptr<Pool> pool_;
public:
	explicit ThreadPool(size_t threadcount = 8) : pool_(std::make_shared<Pool>()) {
		assert(threadcount > 0);
		for (int i = 0; i < threadcount; ++i) {
			std::thread(
					[pool = pool_]{
						while (true) {
							std::unique_lock<std::mutex> locker(pool->mtx);
							while (pool->tasks.empty()) {
								pool->cond.wait(locker);
							}
							if (pool->isclosed) {
							//
								locker.unlock();
								break;
							}
							auto task = pool->tasks.front();
							pool->tasks.pop();
							// why
							locker.unlock();
							task();
						}
					}
					).deatch();
		}
	}
public:
	ThreadPool() = default;
	ThreadPool(ThreadPool &&) = default;
	ThreadPool(const ThreadPool &) = delete;
	ThreadPool &operator=(const ThreadPool &) = delete;
	~ThreadPool() {
		if (static_cast<bool>(pool_)) {
			// modified
			{
				std::lock_guard<std::mutex> locker(pool_->mtx);
				pool_->isclosed = true;
			}
			pool_->cond.notify_all();
		}
	}

	template <typename T>
	void AddTask(T &&task) {
		{
			std::lock_guard<std::mutex> locker(pool_->mtx);
			pool_->tasks.emplace(std::forward<T>(task));
		}
		pool->cond.notify_one();
	}
};




#endif
