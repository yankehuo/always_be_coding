#include <bits/stdc++.h>
using namespace std;
class MyCircularQueue {
public:
	MyCircularQueue(int k) : head(-1), tail(-1), size(k) {
		que.resize(k);
	}
	~MyCircularQueue() {}

	bool enQueue(int value) {
		if (isFull())
			return false;
		if (isEmpty())
			head = 0;
		tail = (tail + 1) % size;
		que[tail] = value;
		return true;
	}
	bool deQueue() {
		if (isEmpty())
			return false;
		if (head == tail) {
			head = tail = -1;
			return true;
		}
		head = (head + 1) % size;
		return true;
	}

	int Front() {
		if (isEmpty())
			return -1;
		return que[head];
	}
	int Rear() {
		if (isEmpty())
			return -1;
		return que[tail];
	}

	bool isEmpty() {
		return -1 == head;
	}
	bool isFull() {
		return ((tail + 1) % size) == head;
	}

private:
	vector<int> que;
	int head, tail;
	int size;
};

class MyCircularQueue {
public:
	MyCircularQueue(int k) : head(0), tail(0), size(k + 1) {
		que.resize(k + 1);
	}
	~MyCircularQueue() {}

	bool isEmpty() {
		return tail == head;
	}
	bool isFull() {
		return ((tail + 1) % size) == head;
	}

	bool enQueue(int value) {
		if (isFull())
			return false;
		que[tail] = value;
		tail = (tail + 1) % size;
		return true;
	}
	bool deQueue() {
		if (isEmpty())
			return false;
		head = (head + 1) % size;
		return true;
	}

	int Front() {
		if (isEmpty())
			return -1;
		return que[head];
	}
	int Rear() {
		if (isEmpty())
			return -1;
		return que[(tail - 1 + size) % size];
	}


private:
	vector<int> que;
	int head, tail;
	int size;
};

int main() {
	return 0;
}







