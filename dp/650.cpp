// 因子数 
int minSteps(int n) {
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[1] = 0;
	for (int i = 2; i <= n; ++i) {
		dp[i] = i;
		for (int j = 2; j * j <= n; ++j) {
			if (i % j == 0) {
				dp[i] = dp[j] + dp[i / j];
				break;
			}
		}
	}
	return dp[n];
}

int minSteps(int n) {
	int res = 0, d = 2;
	while (n > 1) {
		while (n % d == 0) {
			res += d;
			n /= d;
		}
		++d;
	}
	return res;
}
