#include <bits/stdc++.h>
using namespace std;

int numSquares(int n) {
	int dp[n + 1];
	memset(dp, 0x7f, sizeof(dp));
	dp[0] = 0;
	for (int i = 1; i <= sqrt(n); ++i) {
		for (int j = 1; j <= n; ++j) {
			if (j >= i * i)
				dp[j] = min(dp[j], dp[j - i * i] + 1);
		}
	}
	return dp[n];
}
// 任意一个整数都可以表示为至多四个正整数的平方和 n == 4(k) * (8m + 7) -->4个

int main() {
	return 0;
}
