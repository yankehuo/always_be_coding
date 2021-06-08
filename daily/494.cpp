#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findTargetSumWays(vector<int> &nums, int target) {
		int len = nums.size();
		int sum = 0;
		for (const int num : nums)
			sum += num;
		target = target + sum;
		if (sum < target || target & 0x1)
			return 0;
		int dp[len + 1][target / 2 + 1];
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1;
		for (int i = 1; i <= len; ++i) {
			for (int j = 0; j <= target / 2; ++j) {
				dp[i][j] = dp[i - 1][j];
				if (j >= nums[i - 1]) {
					dp[i][j] = dp[i][j] + dp[i - 1][j - nums[i - 1]];
				}
			}
		}
		return dp[len][target / 2];
	}
};
int main() {
	return 0;
}
