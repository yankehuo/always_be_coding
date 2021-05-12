#include <bits/stdc++.h>
using namespace std;
ListNode *remove(ListNode *head, int val) {
	if (!head) return head;
	if (head->val == val) {
		ListNode *next = head->next;
		delete head;
		return remove(next, val);
	}
	else {
		head->next = remove(head->next, val);
		return head;
	}
}

ListNode *remove(ListNode *head, int val) {
	if (!head) return head;
	ListNode **pp = &head;
	while (*pp) {
		if ((*pp)->val == val) {
			*pp = (*pp)->next;
		}
		pp = &(*pp)->next;
	}
	return head;
}

ListNode *remove(ListNode *head, int val) {
	ListNode dummy(0), *pre = &dummy;
	dummy.next = head;
	ListNode *cur = head;
	while (cur) {
		if (cur->val == val) {
			ListNode *tmp = cur;
			pre->next = cur->next;
			cur = cur->next;
			delete tmp;
		}
		else {
			pre = pre->next;
			cur = cur->next;
		}
	}
	return dummy.next;
}
int main() {
	return 0;
}
