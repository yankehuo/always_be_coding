#include <bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n) {
	// Cm+n-2, m - 1
	// m+n-2 * m+n-1 * ... * n
	// m-1 * m-2 * ... * 1
	long res = 1;
	for (int x = n, y = 1; y < m; ++x , ++y)
		res = res * x / y;
	return res;
}

int uniquePaths(int m, int n) {
	int dp[m][n];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < m; ++i)
		dp[i][0] = 1;
	for (int j = 0; j < n; ++j)
		dp[0][j] = 1;
	for (int i = 1; i < m; ++i) {
		for (int j = 1; j < n; ++j) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[m - 1][n - 1];
}

int main() {
	 return 0;
}
