#include <bits/stdc++.h>
using namespace std;
ListNode *detectcycle(ListNode *head) {
	ListNode *slow = head, *fast = head;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			ListNode *node1 = head;
			while (node1 != slow) {
				node1 = node1->next;
				slow = slow->next;
			}
			return node1;
		}
	}
	return nullptr;
}
int main() {
	return 0;
}
