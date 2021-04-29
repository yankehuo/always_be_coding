#ifndef DOUBLE_LINK_HXX
#define DOUBLE_LINK_HXX

#include <iostream>
using namespace std;
template <typename T>
struct DNode {
public:
	T value;
	DNode *prev;
	DNode *next;
public:
	DNode() {}
	DNode(T t, DNode *prev, DNode *next) {
		this->value = t;
		this->prev = prev;
		this->next = next;
	}
};

template <typename T>
class DoubleLink {
public:
	DoubleLink();
	~DoubleLink();

	int size();
	int is_empty();

	DNode<T>* get_node(int index);
	T get(int index);
	T get_first();
	T get_last();

	int insert(int index, T t);
	int insert_first(T t);
	int insert_last(T t);
	int append_last(T t);

	int del(int index);
	int delete_first();
	int delete_last();
private:
	int count;
	DNode<T> *phead;
};

template <typename T>
DoubleLink<T>::DoubleLink() : count(0) {
	phead = new DNode<T>();
	phead->prev = phead->next = phead;
}

template <typename T>
DoubleLink<T>::~DoubleLink() {
	DNode<T> *ptmp;
	DNode<T> *pnode = phead->next;
	while (pnode != phead) {
		ptmp = pnode;
		pnode = pnode->next;
		delete ptmp;
	}
	delete phead;
	phead = nullptr;
}

template <typename T>
int DoubleLink<T>::size() {
	return count;
}

template <typename T>
int DoubleLink<T>::is_empty() {
	return count == 0;
}

template <typename T>
DNode<T> *DoubleLink<T>::get_node(int index) {
	if (index < 0 || index >= count) {
		cout << "get node failed! the index in out of bound!" << endl;
		return nullptr;
	}
	// find -->
	if (index <= count / 2) {
		int i = 0;
		DNode<T> *pindex = phead->next;
		while (i++ < index) {
			pindex = pindex->next;
		}
		return pindex;
	}

	// find <--
	int j = 0;
	int rindex = count - index - 1;
	DNode<T> *prindex = phead->prev;
	while (j++ < rindex) {
		prindex = prindex->prev;
	}
	return prindex;
}

template <typename T>
T DoubleLink<T>::get(int index) {
	return get_node(index)->value;
}

template <typename T>
T DoubleLink<T>::get_first() {
	return get_node(0)->value;
}

template <typename T>
T DoubleLink<T>::get_last() {
	return get_node(count - 1)->value;
}

template <typename T>
int DoubleLink<T>::insert(int index, T t) {
	if (index == 0)
		return insert_first(t);
	DNode<T> *pindex = get_node(index);
	DNode<T> *pnode = new DNode<T>(t, pindex->prev, pindex);
	pindex->prev->next = pnode;
	pindex->prev = pnode;
	++count;
	return 0;
}

template <typename T>
int DoubleLink<T>::insert_first(T t) {
	DNode<T> *pnode = new DNode<T>(t, phead, phead->next);
	phead->next->prev = pnode;
	phead->next = pnode;
	++count;
	return 0;
}

template <typename T>
int DoubleLink<T>::append_last(T t) {
	DNode<T> *pnode = new DNode<T>(t, phead->prev, phead);
	phead->prev->next = pnode;
	phead->prev = pnode;
	++count;
	return 0;
}

template <typename T>
int DoubleLink<T>::del(int index) {
	DNode<T> *pindex = get_node(index);
	pindex->next->prev = pindex->prev;
	pindex->prev->next = pindex->next;
	delete pindex;
	--count;
	return 0;
}

template <typename T>
int DoubleLink<T>::delete_first() {
	return del(0);
}

template <typename T>
int DoubleLink<T>::delete_last() {
	return del(count - 1);
}

#endif
