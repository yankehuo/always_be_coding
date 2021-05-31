#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> nextGreat(vector<int> &nums) {
		vector<int> stk;
		int n = nums.size();
		int i = 0, len = 2 * n - 1;
		vector<int> res(n, -1);
		while (i < len) {
			if (stk.empty() || (i < len && nums[stk.back() % n] >= nums[i % n])) {
				stk.push_back(i++);
			}
			else {
				// 
				res[stk.back() % n] = nums[i % n];
				stk.pop_back();
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
