#include <bits/stdc++.h>
using namespace std;
// convert into knapsack
// target = sum - neg - neg
// --> sum - target == 2neg 
int findTargetSum(vector<int> &nums, int target) {
	// dp[j] = dp[j] + dp[j - nums[i]]
	int sum = 0;
	for (int num : nums)
		sum += num;
	if ((sum - target) & 0x1 || sum < target)
		return 0;
	int neg = (sum - target) / 2;
	int dp[neg + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int num : nums) {
		for (int j = neg; j >= num; --j) {
			dp[j] = dp[j] + dp[j - num];
		}
	}
	return dp[neg];
}
int main() {
	return 0;
}
