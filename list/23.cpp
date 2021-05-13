#include <bits/stdc++.h>
using namespace std;
ListNode *mergek(vector<ListNode*> &lists) {
	int len = lists.size();
	while (len > 1) {
		for (int i = 0; i < len / 2; ++i) {
			lists[i] = mergetwo(lists[i], lists[len - i - 1]);
		}
		len = (len + 1) / 2;
	}
	return lists.front();
}
ListNode *mergetwo(ListNode *l1, ListNode *l2) {
	if (!l1 || !l2)
		return l1 ? l1 : l2;
	if (l1->val <= l2->val) {
		l1->next = mergetwo(l1->next, l2);
		return l1;
	}
	else {
		l2->next = mergetwo(l1, l2->next);
		return l2;
	}
}

struct cmp {
	bool operator()(const ListNode *a, const ListNode *b) {
		return a->val > b->val;
	}
};
ListNode *mergek(vector<ListNode*> &lists) {
	ListNode dummy(0);
	ListNode *cur = &dummy;
	priority_queue<ListNode*, vector<ListNode*>, cmp> q;
	for (ListNode *list : lists) {
		if (list) q.push(list);
	}
	while (!q.empyt()) {
		cur->next = q.top();
		q.pop();
		cur = cur->next;
		if (cur->next)
			q.push(cur->next);
	}
	return dummy.next;
}
int main() {
	return 0;
}
