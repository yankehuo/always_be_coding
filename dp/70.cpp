#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	dp[1] = 1;
	// 背包排列数目
	//
	for (int i = 0; i <= n; ++i) {
		// for (int j = 1; j <= 2; ++j)
		//	 if(i >= j)
		//	   dp[i] = dp[i] + dp[i - j];
		if (i >= 2)
			dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
int main() {
	return 0;
}
