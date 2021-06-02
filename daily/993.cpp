#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isCousins(TreeNode *root, int x, int y) {
		TreeNode *px = nullptr, *py = nullptr;
		int lx = 0, ly = 0;
		dfs(root, px, x, lx);
		dfs(root, py, y, ly);
		return (px == py) && (lx == ly);
	}
	void dfs(TreeNode *node, TreeNode *parent, int val, int &level) {
		if (!node) return;
		if (node->val == val) {
			level = level + 1;
			return;
		}
		dfs(node->left, node, val, level + 1);
		dfs(node->right, node, val, level + 1);
	}
};

int main() {
	return 0;
}
