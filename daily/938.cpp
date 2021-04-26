struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int rangesum(TreeNode *root, int low, int high) {
		if (!root)
			return 0;
		int lefts = rangesum(root->left, low, high);
		int rights = rangesum(root->right, low, high);
		if (root->val >= low && root->val <= high)
			return root->val + lefts + rights;
		else if(root->val < low)
			return rights;
		else
			return lefts;
	}
};
void trimlefttrailingspace(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
				return !isspace(ch);
				}));
}
void trimrighttrailingspace(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
				return !isspace(ch);
				}).base(), input.end());
}
TreeNode *stringtotreenode(string input) {
	trimlefttrailingspace(input);
	trimrighttrailingspace(input);
	input = input.substr(1, input.size() - 2);
	if (input.empty())
		return nullptr;
	string item;
	stringstream ss;
	ss.str(input);
	getline(ss, item, ',');
	TreeNode *root = new TreeNode(stoi(item));
	queue<TreeNode*> nodeque;
	nodeque.push(root);
	while (true) {
		TreeNode *node = nodeque.front();
		nodeque.pop();
		if (!getline(ss, item, ','))
			break;
		trimlefttrailingspace(item);
		if (item != "null") {
			int leftnumber = stoi(item);
			node->left = new TreeNode(leftnumber);
			nodeque.push(node->left);
		}
		if (!getline(ss, item, ','))
			break;
		trimlefttrailingspace(item);
		if (item != "null") {
			int rightnumber = stoi(item);
			node->right = new TreeNode(rightnumber);
			nodeque.push(node->right);
		}
	}
	return root;
}
int stringtoint(string input) {
	return stoi(input);
}
int main() {
	string line;
	while(getline(cin, line)) {
		TreeNode *root = stringtotreenode(line);
		getline(cin, line);
		int low = stringtoint(line);
		getline(cin, line);
		int high = stringtoint(line);

		int res = Solution().rangesum(root, low, high);

		string out = to_string(res);
		cout << out << endl;
	}
	return 0;
}
