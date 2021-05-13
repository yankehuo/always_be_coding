#include <bits/stdc++.h>
using namespace std;

class MyLinkedList {
public:
	MyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}
	~MyLinkedList() {
		ListNode *node = head_;
		while (node) {
			ListNode *todel = node;
			node = node->next;
			delete todel;
		}
		head_ = nullptr;
	}
	
	int get(int index) {
		if (index < 0 || index >= size_)
			return -1;
		ListNode *node = head_;
		while (index--) {
			node = node->next;
		}
		return node->val;
	}

	void addAtHead(int val) {
		head_ = new ListNode(val, head_);
		if (0 == size_++)
			tail_ = head_;
	}
	void addAtTail(int val) {
		ListNode *node = new ListNode(val);
		if (0 == size_++)
			head_ = tail_ = node;
		else {
			tail_->next = node;
			tail_ = tail_->next;
		}
	}
	void addAtIndex(int index, int val) {
		if (index < 0 || index >= size_)
			return;
		if (0 == index)
			return addAtHead(val);
		if (index == size_)
			return addAtTail(val);
		ListNode dummy(0, head_);
		ListNode *pre = &dummy;
		while (index--)
			pre = pre->next;
		pre->next = new ListNode(val, pre->next);
		++size_;
	}

	void deleteAtIndex(int index) {
		if (index < 0 || index >= size_)
			return;
		ListNode dummy(0, head_);
		ListNode *pre = &dummy;
		for (int i = 0; i < index; ++i)
			pre = pre->next;
		ListNode *todel = pre->next;
		pre->next = pre->next->next;
		if (0 == index)
			head_ = pre->next;
		if (size_ - 1 == index)
			tail_ = pre;
		delete todel;
		--size_;

	}

private:
	// set constructor properly
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int val_) : ListNode(val_, nullptr) {}
		ListNode(int val_, ListNode *next_) : val(val_), next(next_) {}
	};

	ListNode *head_;
	ListNode *tail_;
	int size_;
};

int main() {
	return 0;
}
