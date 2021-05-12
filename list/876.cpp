#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	ListNode *getmid(ListNode *head) {
		ListNode *slow = head, *fast = head;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
};
int main() {
	return 0;
}
