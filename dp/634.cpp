#include <bits/stdc++.h>
using namespace std;
int findDerangement(int n) {
	// dp[i] --> derangement numbers
	// i j k ---> i' j' k'
	const int kMOD = 1e9 + 7;
	long dp[n + 1];
	memset(dp, 0, sizeof(dp));
	if (n == 1)
		return 0;
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; ++i) {
		dp[i] = ((i - 1) * dp[i - 2] + (i - 1) * dp[i - 1]) % kMOD;
	}
	return dp[n];
}
int main() {
	return 0;
}
