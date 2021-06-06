#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	ListNode *getIntersection(ListNode *headA, ListNode *headB) {
		// find the same length of path
		ListNode *p1 = headA, *p2 = headB;
		while (p1 != p2) {
			if (p1) {
				p1 = p1->next;
			}
			else {
				p1 = headB;
			}
			if (p2) {
				p2 = p2->next;
			}
			else {
				p2 = headA;
			}
		}
		return p1;
	}

	ListNode *getIntersection(ListNode *headA, ListNode *headB) {
		// hash_table
		unordered_set<ListNode*> st;
		ListNode *p1 = headA;
		while (p1) {
			st.insert(p1);
			p1 = p1->next;
		}

		ListNode *p2 = headB;
		while (p2) {
			if (st.count(p2)) {
				return p2;
			}
			p2 = p2->next;
		}
		return nullptr;
	}
};
int main() {
	return 0;
}
