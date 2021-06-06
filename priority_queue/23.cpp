#include <bits/stdc++.h>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *nex) : val(x), next(nex) {}

};
class Solution {
public:
	ListNode *mergeKlist(vector<ListNode*> &lists) {
		// 1
		struct comp {
			bool operator()(ListNode *l1, ListNode *l2) {
				return l1->val > l2->val;
			}
		};
		// 2
		// auto comp = [](ListNode *l1, ListNode *l2) { return l1->val > l2->val; };
		// priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> pq(comp);
		priority_queue<ListNode*, vector<ListNode*>, comp> pq;
		for (const auto &list : lists) {
			// pay attention
			if (list)
				pq.push(list);
		}
		ListNode dummy(-1);
		ListNode *pre = &dummy;
		while (!pq.empty()) {
			ListNode *cur = pq.top();
			pq.pop();
			pre->next = cur;
			pre = cur;
			if (pre->next) {
				pq.push(pre->next);
			}
		}
		return dummy.next;
	}
};

int main() {
	return 0;
}
