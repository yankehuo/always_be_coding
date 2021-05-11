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
int main() {
	return 0;
}
