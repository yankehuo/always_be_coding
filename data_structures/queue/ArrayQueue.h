#ifndef ARRAY_QUEUE_HXX
#define ARRAY_QUEUE_HXX

#include <iostream>
using namespace std;

template <typename T>
class ArrayQueue {
public:
	ArrayQueue();
	~ArrayQueue();

	void add(T t);
	T front();
	T pop();
	int size();
	int is_empty();
private:
	T *arr;
	int count;
};

template <typename T>
ArrayQueue<T>::ArrayQueue() {
	arr = new T[12];
	if (!arr) {
		cout << "arr malloc error!" << endl;
	}
}

template <typename T>
ArrayQueue<T>::~ArrayQueue() {
	if (arr) {
		delete[] arr;
		arr = nullptr;
	}
}

template <typename T>
void ArrayQueue<T>::add(T t) {
	arr[count] = t;
	++count;
	// arr[count++] = t;
}

template <typename T>
T ArrayQueue<T>::front() {
	return arr[0];
}
template <typename T>
T ArrayQueue<T>::pop() {
	int i = 0;
	T ret = arr[0];

	--count;
	while (i++ < count) {
		arr[i - 1] = arr[i];
	}
	return ret;
}

template <typename T>
int ArrayQueue<T>::size() {
	return count;
}

template <typename T>
int ArrayQueue<T>::is_empty() {
	return count == 0;
}

#endif
