#include <bits/stdc++.h>
using namespace std;

ListNode *reversekgroup(ListNode *head, int k) {
	if (!head || k == 1) return head;
	ListNode *last = head;
	while (k--) {
		if (!last) return head;
		last = last->next;
	}
	ListNode *newhead = reverserange(head, last);
	head->next = reversekgroup(last, k);
	return newhead;
}

ListNode *reverserange(ListNode *first, ListNode *last) {
	ListNode *pre = last;
	while (first != last) {
		ListNode *tmp = pre->next;
		first->next = pre;
		pre = first;
		first = tmp;
	}
	return pre;
}


ListNode *reversek(ListNode *head, int k) {
	if (!head || k == 1) return head;
	ListNode dummy(0);
	dummy.next = head;
	ListNode *pre = &dummy;

	ListNode *cur = head;
	int len = 0;
	while (cur) {
		++len;
		cur = cur->next;
	}
	for (int i = 0; i <= len - k; i = i + k) {
		cur = pre->next;
		ListNode *nex = cur->next;
		for (int j = 1; j < k; ++j) {
			ListNode *tmp = pre->next;
			pre->next = nex;
			cur->next = nex->next;
			nex->next = tmp;
			nex = cur->next;
		}
		pre = cur;
	}
	return dummy.next;
}
int main() {
	return 0;
}
