#ifndef ARRAY_STACK_HXX
#define ARRAY_STACK_HXX

#include <iostream>
using namespace std;

template <typename T> 
class ArrayStack {
public:
	ArrayStack();
	~ArrayStack();
	
	void push(T t);
	T peek();
	T pop();
	int size();
	int isempty();
private:
	T *arr;
	int count;
};

template <typename T>
ArrayStack<T>::ArrayStack() {
	arr = new T[12];
	if (!arr) {
		cout << "arr malloc error!" << endl;
	}
}

template <typename T>
ArrayStack<T>::~ArrayStack() {
	if (arr) {
		delete[] arr;
		arr = nullptr;
	}
}

template <typename T>
void ArrayStack<T>::push(T t) {
	arr[count] = t;
	++count;
	// arr[count++] = t;
}

template <typename T>
T ArrayStack<T>::peek() {
	return arr[count - 1];
}

template <typename T>
T ArrayStack<T>::pop() {
	int ret = arr[count - 1];
	--count;
	return ret;
}

template <typename T>
int ArrayStack<T>::size() {
	return count;
}

template <typename T>
int ArrayStack<T>::isempty() {
	return size() == 0;
}

#endif
