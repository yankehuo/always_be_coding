#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP

// why?
#include <iomanip>
#include <iostream>
using namespace std;

template <typename T>
class BSTNode {
public:
	T key;
	BSTNode *left;
	BSTNode *right;
	BSTNode *parent;

	BSTNode(T value, BSTNode *p, BSTNode *l, BSTNode *r) : 
		key(value), parent(p), left(l), right(r) {}
};

template <typename T>
class BSTree {
private:
	BSTNode *mRoot;
public:
	BSTree();
	~BSTree();

	void preOrder();
	void inOrder();
	void postOrder();

	BSTNode<T>* search(T key);
	BSTNode<T>* iterativeSearch(T key);

	T minimum();
	T maximum();

	BSTNode<T>* successor(BSTNode<T> *x);
	BSTNode<T>*  predecessor(BSTNode<T> *x);

	void insert(T key);

	void remove(T key);

	void destroy();

	void print();
private:
	void preOrder(BSTNode<T>* tree) const;
	void inOrder(BSTNode<T>* tree) const;
	void postOrder(BSTNode<T>* tree) const;

	BSTNode<T>* search(BSTNode<T>* x, T key) const;
	BSTNode<T>* iterativeSearch(BSTNode<T>* x, T key) const;

	BSTNode<T>* minimum(BSTNode<T>* tree);
	BSTNode<T>* maximum(BSTNode<T>* tree);

	// reference to the pointer to BSTNode
	void insert(BSTNode<T>* &tree, BSTNode<T>* z);

	BSTNode<T>* remove(BSTNode<T>* &tree, BSTNode<T> *z);

	void destroy(BSTNode<T>* &tree);

	void print(BSTNode<T>* tree, T key, int direction);
};

template <typename T>
BSTree<T>::BSTree() : mRoot(nullptr) {}

template <typename T>
BSTree<T>::~BSTree() {
	destroy();
}



#endif
