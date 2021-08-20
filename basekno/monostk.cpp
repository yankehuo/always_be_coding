#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &nums) {
	vector<int> stk;
	int res;
	int n = nums.size();
	for (int i = 0; i < n; ++i) {
		// stk <-- 5 4 3 2 1
		// 弹出处理
		while (!stk.empty() && nums[stk.back()] < nums[i]) {
			int top = stk.back();
			int w = ;
			int h = ;
			// important
			if (stk.empty()) ;
			// do something
		}
		stk.push_back(i);
	}
	return res;
}

int main() {
	

}
