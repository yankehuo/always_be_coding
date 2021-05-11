#include <bits/stdc++.h>
using namespace std;
ListNode *oddevenlist(ListNode *head) {
	if (!head || !head->next) return head;
	ListNode *odd = head;
	ListNode *even = head->next;
	ListNode *evenhead = head->next;
	while (odd && odd->next) {
		odd->next = odd->next->next;
		odd = odd->next;
		if (odd && odd->next)
			even->next = even->next->next;
		even = even->next;
	}
	odd->next = evenhead;
	return head;
}

ListNode *oddtail = nullptr;
ListNode *oddeven(ListNode *head) {
	if (!head) return nullptr;
	ListNode *even = getoddeven(head);
	oddtail->next = even;
	return head;
}
ListNode *getoddeven(ListNode *node) {
	ListNode *even = nullptr;
	if (node && node->next) {
		even = node->next;
		node->next = even->next;
		if (even->next) {
			even->next = even->next->next;
			getoddeven(node->next);
		}
		else {
			oddtail = node;
		}
	}
	else {
		oddtail = node;
	}
	return even;
}


int main() {
	return 0;
}
