#include <bits/stdc++.h>
using namespace std;
class Tweet {
public:
	int id_, time_;
	Tweet *next_;
	Tweet(int id, int time) : id_(id), time_(time), next_(nullptr) {}
};

class User {
public:
	int id_;
	unordered_set<int> follows;
	Tweet *tweets;

	User() {}
	// ?
	User(int id) : id_(id), tweets(nullptr) {
		follow(id);
	} 

	User(int id) {
		id_ = id;
		tweets = nullptr;
		follow(id);
	}

	void follow(int userId) {
		follows.insert(userId);
	}
	void unfollow(int userId) {
		follows.erase(userId);
	}
	void post(int tweetId, int time) {
		Tweet *cur = tweets;
		tweets = new Tweet(tweetId, time);
		tweets->next_ = cur;
	}
};

class Twitter {
private:
	int time = 0;
	unordered_map<int, User> users;

	struct cmp {
		bool operator()(const Tweet *t1, const Tweet *t2) {
			return t1->time_ < t2->time_;
		}
	};
public:
	Twitter() {}

	void postTweet(int userId, int tweetId) {
		if (users.find(userId) == users.end())
			users[userId] = User(userId);
		users[userId].post(tweetId, ++time);
	}

	vector<int> getNewsFeed(int userId) {
		vector<int> feed;
		if (users.find(userId) == users.end())
			return feed;
		unordered_set<int> userIds = users[userId].follows;
		priority_queue<Tweet*, vector<Tweet*>, cmp> pq;
		for (int userId : userIds) {
			Tweet *tweets = users[userId].tweets;
			if (tweets)
				pq.push(tweets);
		}
		for (int i = 0; !pq.empty() && i < 10; ++i) {
			Tweet *tweets = pq.top();
			pq.pop();
			feed.push_back(tweets->id_);
			if (tweets->next_)
				pq.push(tweets->next_);
		}
		return feed;
	}

	void follow(int followerId, int followeeId) {
		if (users.find(followerId) == users.end())
			users[followerId] = User(followerId);
		if (users.find(followeeId) == users.end())
			users[followeeId] = User(followeeId);
		users[followerId].follow(followeeId);
	}

	void unfollow(int followerId, int followeeId) {
		if (users.find(followerId) != users.end() && followerId != followeeId)
			users[followerId].unfollow(followeeId);
	}
};
int main() {
	return 0;
}
