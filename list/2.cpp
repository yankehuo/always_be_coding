#include <bits/stdc++.h>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
	ListNode *addtwo(ListNode *l1, ListNode *l2) {
		ListNode dummy(-1);
		ListNode *tail = &dummy;
		int sum = 0;
		while (l1 || l2 || sum) {
			sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + sum;
			tail->next = new ListNode(sum % 10);
			l1 = l1 ? l1->next : nullptr;
			l2 = l2 ? l2->next : nullptr;
			sum /= 10;
			tail = tail->next;
		}
		return dummy.next;
	}
};

class Solution2 {
public:
	ListNode *addtwo(ListNode *l1, ListNode *l2) {
		ListNode dummy(-1);
		ListNode *tail = &dummy;
		int sum = 0;
		while (l1 || l2 || sum) {
			if (l1) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2) {
				sum += l2->val;
				l2 = l2->next;
			}
			tail->next = new ListNode(sum % 10);
			sum /= 10;
			tail = tail->next;
		}
		return dummy.next;
	}
};
vector<int> stringtovector(string input) {
	vector<int> output;
	stringstream ss;
	ss.str(input);
	string item;
	char delim = ' ';
	while (getline(ss, item, delim))
		output.push_back(stoi(item));
	return output;
}
ListNode *stringtolistnode(string input) {
	vector<int> list = stringtovector(input);
	ListNode *dummy = new ListNode(0);
	ListNode *ptr = dummy;
	for (int item : list) {
		ptr->next = new ListNode(item);
		ptr = ptr->next;
	}
	ptr = dummy->next;
	delete dummy;
	return ptr;
}
string listnodetostring(ListNode *node) {
	if (node == nullptr)
		return "[]";
	string result;
	while (node) {
		result += to_string(node->val) + ", ";
		node = node->next;
	}
	return "[" + result.substr(0, result.length() - 2) + "]";
}
int main() {
	string line;
	while (getline(cin, line)) {
		ListNode *l1 = stringtolistnode(line);
		getline(cin, line);
		ListNode *l2 = stringtolistnode(line);

		ListNode *res = Solution().addtwo(l1, l2);
		string out = listnodetostring(res);
		cout << out << endl;
	}
	return 0;
}
