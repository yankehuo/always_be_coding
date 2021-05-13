#include <bits/stdc++.h>
using namespace std;
ListNode *removenth(ListNode *head, int n) {
	if (!head || !head->next) return head;
	ListNode dummy(0);
	dummy.next = head;
	ListNode *slow = &dummy, *fast = dummy;
	while (n-- && fast) {
		fast = fast->next;
	}
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next;
	}
	ListNode *todel = slow->next;
	slow->next = slow->next->next;
	delete todel;
	return head;
}
int main() {
	rreturn 0;
}
