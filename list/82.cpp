#include <bits/stdc++.h>
using namespace std;

ListNode *removedup(ListNode *head) {
	ListNode dummy(0);
	ListNode *pre = &dummy;
	dummy.next = head;

	ListNode *cur = head;
	while (cur && cur->next) {
		if (cur->next->val != cur->val) {
			pre = cur;
			cur = cur->next;
		}
		else {
			int dupval = cur->val;
			while (cur && cur->val == dupval) {
				ListNode *todel = cur;
				pre->next = cur->next;
				cur = cur->next;
				delete todel;
			}
		}
	}
	return dummy.next;
}
int main() {
	return 0;
}
