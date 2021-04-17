#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int miniDiff(TreeNode* root){
		if(!root)
			return 0;
		miniDiff(root->left);
		if(pre)
			dif = std::min(dif, root->val - pre->val);
		pre = root->left;
		miniDiff(root->right);
		return dif;
	}
private:
	TreeNode* pre = nullptr;
	int dif = std::numeric_limits<int>::max();
};
int main(){
	return 0;
};
