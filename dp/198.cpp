#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int rob(vector<int> &nums) {
		// dp[i] = dp[i - 1], dp[i - 2] + nums[i] max
		int len = nums.size();
		if (len == 0)
			return 0;
		if (len == 1)
			return nums[0];
		if (len == 2)
			return max(nums[0], nums[1]);
		int dp[len];
		memset(dp, 0, sizeof(dp));
		dp[0] = nums[0];
		dp[1] = max(nums[0], nums[1]);
		for (int i = 2; i < len; ++i) {
			dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
		}
		return dp[len - 1];
	}

	// exist problems
	int rob(vector<int> &nums) {
		int len = nums.size();
		int dp[2];
		memset(dp, 0, sizeof(dp));
		dp[0] = nums[0];
		dp[1] = max(nums[0], nums[1]);
		for (int i = 2; i < len; ++i) {
			dp[i & 0x1] = max(dp[(i - 1) & 0x1], dp[(i - 2) & 0x1] + nums[i]);
		}
		return dp[1];
	}

	// pointer -2 -1
	int rob(vector<int> &nums) {
		int len = nums.size();
		int pre2 = 0, pre1 = 0;
		for (int i = 0; i < len; ++i) {
			int cur = max(pre2 + nums[i], pre1);
			pre2 = pre1;
			pre1 = cur;
		}
		return pre1;
	}
};
int main() {
	return 0;
}
