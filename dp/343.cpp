#include <bits/stdc++.h>
using namespace std;
int integerBreak(int n) {
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i; ++j) {
			dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
		}
	}
	return dp[n];
}


int integerBreak(int n) {
	if (n <= 3)
		return n - 1;
	int quotient = n / 3, remainder = n % 3;
	if (remainder == 0)
		return pow(3, quotient);
	else if (remainder == 1)
		return pow(3, quotient - 1) * 4;
	else {
		return pow(3, quotient) * 2;
	}
}

int main() {
	return 0;
}
