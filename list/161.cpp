#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	// path sum ==
	ListNode *getintersection(ListNode *headA, ListNode *headB) {
		if (!headA || !headB) return nullptr;
		ListNode *p1  = headA, *p2 = headB;
		while (p1 != p2){
			p1 = p1->next ? p1->next : headB;
			p2 = p2->next ? p2->next : headA;
		}
		return p1;
	}
};
int main() {
	return 0;
}
