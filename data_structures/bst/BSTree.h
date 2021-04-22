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

	void print(BSTNode<T> *tree, T key, int direction);
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

template <typename T>
void BSTree<T>::preOrder(BSTNode<T>* tree) const {
	if (tree != nullptr) {
		cout << tree->key << " ";
		preOrder(tree->left);
		preOrder(tree->right);
	}
}

template <typename T>
void BSTree<T>::preOrder() {
	preOrder(mRoot);
}

template <typename T>
void BSTree<T>::inOrder(BSTNode<T>* tree) const {
	if (tree != nullptr) {
		inOrder(tree->left);
		cout << tree->key << " ";
		inOrder(tree->right);
	}
}

template <typename T>
void BSTree<T>::inOrder() {
	inOrder(mRoot);
}

template <typename T>
void BSTree<T>::postOrder(BSTNode<T>* tree) const {
	if (tree != nullptr) {
		postOrder(tree->left);
		postOrder(tree->right);
		cout << tree->key << " ";
	}
}

template <typename T>
void BSTree<T>::postOrder() {
	postOrder(mRoot);
}

template <typename T>
BSTNode<T>* BSTree<T>::search(BSTNode<T>* x, T key) const {
	if (x == nullptr || x->key == key)
		return x;
	if (key < x->key)
		return search(x->left, key);
	else
		return search(x->right, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::search(T key) {
	search(mRoot, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(BSTNode<T>* x, T key) const {
	while ((x != nullptr) && (x->key != key)) {
		if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(T key) {
	iterativeSearch(mRoot, key);
}

template <typename T>
void BSTree<T>::preOrder() {
	preOrder(mRoot);
}

template <typename T>
void BSTree<T>::inOrder(BSTNode<T>* tree) const {
	if (tree != nullptr) {
		inOrder(tree->left);
		cout << tree->key << " ";
		inOrder(tree->right);
	}
}

template <typename T>
void BSTree<T>::inOrder() {
	inOrder(mRoot);
}

template <typename T>
void BSTree<T>::postOrder(BSTNode<T>* tree) const {
	if (tree != nullptr) {
		postOrder(tree->left);
		postOrder(tree->right);
		cout << tree->key << " ";
	}
}

template <typename T>
void BSTree<T>::postOrder() {
	postOrder(mRoot);
}

template <typename T>
BSTNode<T>* BSTree<T>::search(BSTNode<T>* x, T key) const {
	if (x == nullptr || x->key == key)
		return x;
	if (key < x->key)
		return search(x->left, key);
	else
		return search(x->right, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::search(T key) {
	search(mRoot, key);
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(BSTNode<T>* x, T key) const {
	while ((x != nullptr) && (x->key != key)) {
		if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}

template <typename T>
BSTNode<T>* BSTree<T>::iterativeSearch(T key) {
	iterativeSearch(mRoot, key);
}

// append

template <typename T>
BSTNode<T>* BSTree<T>::minimum(BSTNode<T>* tree) {
	if (tree == nullptr)
		return nullptr;
	while (tree->left != nullptr) {
		tree = tree->left;
	}
	return tree;
}

template <typename T>
BSTNode<T>* BSTree<T>::minimum() {
	BSTNode<T> *p = minimum(mRoot);
	if (p != nullptr) {
		return p->key;
	}
	return (T)nullptr;
}

template <typename T>
BSTNode<T>* BSTree<T>::maximum(BSTNode<T>* tree) {
	if (tree == nullptr)
		return nullptr;
	while (tree->right != nullptr) {
		tree = tree->right;
	}
	return tree;
}

template <typename T>
BSTNode<T>* BSTree<T>::maximum() {
	BSTNode<T> *p = maximum(mRoot);
	if (p != nullptr) {
		return p->key;
	}
	return (T)nullptr;
}

template <typename T>
BSTNode<T>* BSTree<T>::successor(BSTNode<T> *x) {
	if (x->right != nullptr)
		return minimum(x->right);
	BSTNode<T> *y = x->parent;
	while ((y != nullptr) && (x == y->right)) {
		x = y;
		y = y->parent;
	}
	return y;
}

template <typename T>
BSTNode<T>* BSTree<T>::predecessor(BSTNode<T> *x) {
	if (x->left != nullptr)
		return maximum(x->left);
	BSTNode<T> *y = x->parent;
	while ((y != nullptr) && (y->left == x)) {
		x = y;
		y = y->parent;
	}
	return y;
}

template <typename T>
void BSTree<T>::insert(BSTNode<T> *&tree, BSTNode<T> *z) {
	BSTNode<T> *y = nullptr;
	BSTNode<T> *x = tree;

	while (x != nullptr) {
		y = x;
		if (z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if (y == nullptr)
		tree = z;
	else if (z->key < y->key) {
		y->left = z;
	}
	else {
		y->right = z;
	}

}

template <typename T>
void BSTree<T>::insert(T key) {
	BSTNode<T> *z = nullptr;
	if ((z = new BSTNode<T>(key, nullptr, nullptr, nullptr)) == nullptr)
		return;
	insert(mRoot, z);
}

template <typename T>
BSTNode<T> *BSTree<T>::remove(BSTNode<T> *&tree, BSTNode<T> *z) {
	BSTNode<T> *x = nullptr;
	BSTNode<T> *y = nullptr;

	if ((z->left == nullptr) || (z->right == nullptr))
		y = z;
	else
		y = successor(z);

	if (y->left != nullptr)
		x = y->left;
	else 
		x = y->right;

	if (x != nullptr)
		x->parent = y->parent;

	if (y->parent == nullptr)
		tree = x;
	else if (y == y->parent->left)
		y->parent->left = x;
	else
		y->parent->right = x;

	if (y != z)
		z->key = y->key;

	return y;
}

template <typename T>
void BSTree<T>::remove(T key) {
	BSTNode<T> *z, *node;
	if ((z == search(mRoot, key)) != nullptr) {
		if ((node = remove(mRoot, z)) != nullptr)
			delete node;
	}
}

template <typename T>
void BSTree<T>::destroy(BSTNode<T> *&tree) {
	if (tree == nullptr)
		return;
	if (tree->left != nullptr)
		return destroy(tree->left);
	if (tree->right != nullptr)
		return destroy(tree->right);
	delete tree;
	tree = nullptr;
}

template <typename T>
void BSTree<T>::destroy() {
	destroy(mRoot);
}

template <typename T>
void BSTree<T>::print(BSTode<T> *tree, T key, int direction) {
	if (tree != nullptr) {
		if (direction == 0)
			// sets the field width to be used on output oerations
			cout << setw(2) << tree->key << " is root" << endl;
		else
			cout << setw(2) << tree->key << " is " << setw(2) << key << "'s " << setw(12) << (direction == 1 ? "right child" : "left child") << endl;
		print(tree->left, tree->key, -1);
		print(tree->right, tree->key, 1);
	}
}

template <typenamet T>
void BSTree<T>::print() {
	if (mRoot != nullptr)
		print(mRoot, mRoot->key, 0);
}

#endif
