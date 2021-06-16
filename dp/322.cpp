#include <bits/stdc++.h>
using namespace std;
int coinChange(vector<int> &coins, int amount) {
	// dp[i][j] = dp[i - 1][j], dp[i][j - coins[i]] + 1
	// dp[j] = min(dp[j], dp[j - coins[i]] + 1)
	int dp[amount + 1];
	memset(dp, 0x0f, sizeof(dp));
	dp[0] = 0;
	for (int coin : coins) {
		for (int j = coin; j <= amount; ++j) {
			dp[j] = min(dp[j], dp[j - coin] + 1);
		}
	}
	return dp[amount] == 0x0f ? -1 : dp[amount];
}
int main() {
	return 0;
}
