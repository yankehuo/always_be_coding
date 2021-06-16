#include <bits/stdc++.h>
using namespace std;

// 先手奇数，偶数可以选择
bool stoneGame(vector<int> &piles) {
	return true;
}

bool stoneGame(vector<int> &piles) {
	int n = piles.size();
	// dp[i][j] --> abs(alex-lee), 剩下的石子堆为i..j
	// i<j
	// dp[i][j] = max(piles[i] - dp[i + 1][j], piles[j] - dp[i][j - 1])
	int dp[n][n];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n; ++i)
		dp[i][i] = piles[i];
	for (int i = n - 2; i >= 0; --i) {
		for (int j = i + 1; j < n; ++j) {
			dp[i][j] = max(piles[i] - dp[i + 1][j], piles[j] - dp[i][j - 1]);
		}
	}
	return dp[0][n - 1] > 0;
}
