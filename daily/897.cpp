#include <bits/stdc++.h>
using namespace std;
class Soltion {
public:
	TreeNode *increasingbst(TreeNode *root) {
		TreeNode *dummy = new TreeNode(0);
		prev = dummy;
		dfs(root);
		return dummy->right;
	}
private:
	TreeNode *prev = nullptr;
	void dfs(TreeNode *root) {
		if (root != nullptr) {
			dfs(root->left);
			if (prev != nullptr) {
				prev->right = root;
				root->left = nullptr;
			}
			prev = root;
			dfs(root->right);
		}
	}
};

int main() {
	return 0;
}

