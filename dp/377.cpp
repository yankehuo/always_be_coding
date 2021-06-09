#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int combinationSum(vector<int> &nums, int target) {
		// 非完全背包
		// 顺序
		// 根本-->定义
		unsigned long dp[target + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i = 0; i <= target; ++i) {
			for (int num : nums) {
				if (i >= num)
					dp[i] = dp[i] + dp[i - num];
			}
		}
		return dp[target];
	}
};
int main() {
	return 0;
}
