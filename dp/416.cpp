#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool canPartition(vector<int> &nums) {
		// dp[i][j] = dp[i - 1][j], dp[i - 1][j - num]
		// dp[j] = dp[j], dp[j - num]
		int sum = 0;
		for (int num : nums) {
			sum += num;
		}
		if (sum & 0x1)
			return false;
		bool dp[sum / 2 + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i = 0; i < nums.size(); ++i) {
			for (int j = sum / 2; j >= nums[i]; --j) {
				dp[j] = dp[j] || dp[j - nums[i]];
			}
		}

		// for (int num : nums) {
		// 	for (int j = sum / 2; j >= nums[i]; --j) {
		// 		dp[j] = dp[j] || dp[j - num];
		// 	}
		// }
			
		return dp[sum / 2];
	}
};
int main() {
	return 0;
}
