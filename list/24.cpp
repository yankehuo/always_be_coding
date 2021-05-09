#include <bits/stdc++.h>
// only for algo
using namespace std;

ListNode *swapnode(ListNode *head) {
	ListNode dummy(0);
	dummy.next = head;
	ListNode *pre = &dummy;

	while (pre->next && pre->next->next) {
		ListNode *cur = pre->next;
		ListNode *nex = pre->next->next;
		pre->next = nex;
		cur->next = nex->next;
		nex->next = cur;
		pre = cur;
	}
	return dummy.next;
}

ListNode *swapnode(ListNode *head) {
	if (!head || !head->next)
		return head;
	ListNode *node = head->next;
	head->next = swapnode(head->next->next);
	node->next = head;
	return node;
}

int main() {
	return 0;
}
