#include <bits/stdc++.h>
using namespace std;
// top down soluton
ListNode *sortlist(ListNode *head) {
	if (!head) return head;
	ListNode *mid = getmid(head);
	ListNode *left = sortlist(head);
	ListNode *right = sortlist(mid);
	return mergetwo(left, right);
}
ListNode *getmid(ListNode *head) {
	ListNode *slow = head, *fast = head->next;
	while (fast && fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	ListNode *mid = slow->next;
	slow->next = nullptr;
	return mid;
}
// aux
ListNode *mergetwo(ListNode *l1, ListNode *l2) {
	if (!l1 || !l2) 
		return l1 ? l1 : l2;
	if (l1->val <= l2->val) {
		l1->next = mergetwo(l1->next, l2);
		return l1;
	}
	else {
		l2->next = mergetwo(l1, l2->next);
		return l2;
	}
}
// bottom up solution
ListNode *sortlist(ListNode *head) {
	if (!head || !head->next) return head;
	ListNode dummy(0);
	dummy.next = head;
	ListNode *pre = &dummy;
	ListNode *cur = head;
	ListNode *left = nullptr, *right = nullptr;
	int len = 0;
	while (head) {
		++len;
		head = head->next;
	}
	for (int sz = 1; sz <= len; sz <<= 1) {
		pre = &dummy;
		cur = dummy.next;
		while (cur) {
			left = cur;
			right = splitlist(left, sz);
			cur = splitlist(right, sz);
			ListNode *merged = mergetwo(left, right);
			pre->next = merged;
			while (pre && pre->next) {
				pre = pre->next;
			}
		}
	}
	return dummy.next;
}

ListNode *splitlist(ListNode *head, int n) {
	if (n == 0 || !head)
		return nullptr;
	while (--n && head) {
		head = head->next;
	}
	ListNode *rest = head ? head->next : nullptr;
	if (head)
		head->next = nullptr;
	return rest;
}


// priority queue
ListNode *sortlist(ListNode *head) {
	if (!head || head) return head;
	ListNode dummy(0);
	dummy.next = head;
	priority_queue<int, vector<int>, greater<int>> pq;
	while (head) {
		pq.push(head->val);
		head = head->next;
	}
	head = dummy.next;
	while (!pq.empty()) {
		int tmp = pq.top();
		pq.pop();
		head->val = tmp;
		head = head->next;
	}
	return dummy.next;
}
int main() {
	return 0;
}
