#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums) {
	int n = nums.size();
	if (n == 1)
		return nums[0];
	return max(rob(nums, 0, n - 2), rob(nums, 1, n - 1));
}
int rob(vector<int> &nums, int s, int t) {
	int pre2 = 0, pre1 = 0;
	for (int i = s; i <= t; ++i) {
		int cur = max(pre2 + nums[i], pre1);
		pre2 = pre1;
		pre1 = cur;
	}
	return pre1;
}


int main() {
	return 0;
}
