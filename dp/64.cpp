#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>> &grid) {
	// dp[i][j] = dp[i - 1][j], dp[i][j - 1]  + grid[i][j]
	// s-->t
	int m = grid.size(), n = grid[0].size();
	if (m == 0 || n == 0)
		return 0;
	int dp[m][n];
	memset(dp, 0, sizeof(dp));
	dp[0][0] = grid[0][0];
	for (int i = 1; i < m; ++i)
		dp[i][0] = dp[i - 1][0] + grid[i][0];
	for (int j = 1; j < n; ++j)
		dp[0][j] = dp[0][j - 1] + grid[0][j];
	for (int i = 1; i < m; ++i) {
		for (int j = 1; j < n; ++j) {
			dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + grid[i][j];
		}
	}
	return dp[m - 1][n - 1];
}

int main() {
	return 0;
}
