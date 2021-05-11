#include <bits/stdc++.h>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
	ListNode *reverse(ListNode *head) {
		if (!head || !head->next)
			return head;
		ListNode *last = reverse(head->next);
		head->next->next = head;
		head->next = nullptr;
		return last;
	}
};

ListNode *reversenode(ListNode *head) {
	ListNode *pre = nullptr, *cur = head, *nex = nullptr;
	while (cur) {
		nex = cur->next;
		cur->next = pre;
		pre = cur;
		cur = nex;
	}
	return pre;
}
int main() {
	return 0;
}
