#include <bits/stdc++.h>
using namespace std;
// exist problems
class MyCircularDeque {
private:
	int head, tail;
	int size;
	vector<int> que;
public:
	MyCircularDeque(int k) : head(-1), tail(-1), size(k) {
		que.resize(k);
	}
	~MyCircularDeque() {}

	bool isEmpty() {
		return -1 == head;
	}
	bool isFull() {
		return ((tail + 1) % size) == head;
	}

	bool insertFront(int value) {
		if (isFull())
			return false;
		if (isEmpty())
			tail = 0;
		head = (head + size - 1) % size;
		que[head] = value;
		return true;
	}
	
	bool insertLast(int value) {
		if (isFull())
			return false;
		if (isEmpty())
			head = 0;
		tail = (tail + 1) % size;
		que[tail] = value;
		return true;
	}

	bool deleteFront() {
		if (isEmpty())
			return false;
		if (head == tail) {
			head = tail = -1;
			return true;
		}
		head = (head + 1) % size;
		return true;
	}

	bool deleteLast() {
		if (isEmpty())
			return false;
		if (head == tail) {
			head = tail = -1;
			return true;
		}
		tail = (tail + size - 1) % size;
		return true;

	}

	int getFront() {
		if (isEmpty())
			return -1;
		return que[head];
	}

	int getRear() {
		if (isEmpty())
			return -1;
		// tail = (tail + size - 1) % size;
		return que[tail];
	}
};
class MyCircularDeque {
private:
	int head, tail;
	int size;
	vector<int> que;
public:
	MyCircularDeque(int k) : head(0), tail(0), size(k + 1) {
		que.resize(size);
	}

	bool isEmpty() {
		return head == tail;
	}
	bool isFull() {
		return (tail + 1) % size == head;
	}

	bool insertFront(int value) {
		if (isFull())
			return false;
		head = (head - 1 + size) % size;
		que[head] = value;
		return true;
	}
	bool insertLast(int value) {
		if (isFull())
			return false;
		que[tail] = value;
		tail = (tail + 1) % size;
		return true;
	}
	bool deleteFront() {
		if (isEmpty())
			return false;
		head = (head + 1) % size;
		return true;
	}
	bool deleteLast() {
		if (isEmpty())
			return false;
		tail = (tail - 1 + size) % size;
		return true;
	}
	int getFront() {
		if (isEmpty())
			return -1;
		return que[head];
	}
	int getRear() {
		if (isEmpty())
			return -1;
		return que[(tail - 1 + size) % size];
	}

};





	
int main() {
	return 0;
}
