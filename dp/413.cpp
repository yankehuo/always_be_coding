#include <bits/stdc++.h>
using namespace std;
int numberOfArti(vector<int> &nums) {
	// dp[i] = dp[i - 1] + 1;
	int len = nums.size();
	int dp[len];
	memset(dp, 0, sizeof(dp));
	for (int i = 2; i < len; ++i) {
		if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
			dp[i] = dp[i - 1] + 1;
		}
	}
	int res = 0;
	for(int e : dp) {
		res += e;
	}
	return res;
}
int main() {
	return 0;
}
