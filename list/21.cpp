#include <bits/stdc++.h>
using namespace std;
ListNode *mergetwolists(ListNode *l1, ListNode *l2) {
	if (!l1 && !l2) {
		return nullptr;
	}
	if (!l1) return l2;
	if (!l2) return l1;
	if (l1->val <= l2->val) {
		l1->next = mergetwolists(l1->next, l2);
		return l1;
	}
	else {
		l2->next = mergetwolists(l1, l2->next);
		return l2;
	}
}

ListNode *mergetwo(ListNode *l1, ListNode *l2) {
	if (!l1 || !l2)
		return l1 ? l1 : l2;
	ListNode dummy(0);
	ListNode *pre = &dummy;
	while (l1 && l2) {
		if (l1->val <= l2->val) {
			pre->next = l1;
			l1 = l1->next;
		}
		else {
			pre->next = l2;
			l2 = l2->next;
		}
		pre = pre->next;
	}
	if (l1) {
		pre->next = l1;
	}
	if (l2) {
		pre->next = l2;
	}
	return dummy.next;
}
int main() {
	return 0;
}
