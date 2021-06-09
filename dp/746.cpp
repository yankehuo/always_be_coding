#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minCostClimbingStairs(vector<int> &cost) {
		// 背包n的花费大小 ? 如何理解
		// dp[j] = min(dp[j], dp[j - cost[i]]);
		int len = cost.size();
		int dp[len + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = dp[1] = 0;
		for (int i = 2; i <= len; ++i) {
			dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
		}
		return dp[len];
	}
};
int main() {
	return 0;
}
