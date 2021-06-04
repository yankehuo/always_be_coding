#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	ListNode *getIntersection(ListNode *headA, ListNode *headB) {
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
};
int main() {
	return 0;
}
