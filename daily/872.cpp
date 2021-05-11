#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
		vector<int> leaf1;
		vector<int> leaf2; 
		getleaf(root1, leaf1);
		getleaf(root2, leaf2);
		return leaf1 == leaf2;
	}
	void getleaf(TreeNode *root, vector<int> &res) {
		if (!root)
			return;
		if (root && !root->left && !root->right) {
			res.push_back(root->val);
		}
		if (root->left)
			getleaf(root->left, res);
		if (root->right)
			getleaf(root->right, res);
	}
};

int main() {
	return 0;
}
