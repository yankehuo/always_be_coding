#include <bits/stdc++.h>
using namespace std;
int numDecodings(string s) {
	// dp[i] = dp[i - 1] + dp[i - 2]
	int n = s.size();
	int dp[n];
	memset(dp, 0, sizeof(dp));
	if (s[0] == '0')
		return 0;
	if (n == 1)
		return 1;
	dp[0] = 1;
	int first = stoi(s.substr(0, 2));
	if (s[1] != '0')
		dp[1] = dp[0];
	if (first <= 26 && first >= 10)
		dp[1] += 1;
	for (int i = 2; i < n; ++i) {
		// notice
		if (s[i] != '0')
			dp[i] = dp[i - 1];
		int num = stoi(s.substr(i - 1, 2));
		if (num <= 26 && num >= 10)
			dp[i] += dp[i - 2];
	}
	return dp[n - 1];
}


int numDecodings(string s) {
	if (s[0] == '0')
		return 0;
	int n = s.size();
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		if (s[i - 1] != '0')
			// dp[i] += dp[i - 1];
			dp[i] = dp[i - 1];
		int num = stoi(s.substr(i - 2, 2));
		if (num <= 26 && num >= 10)
			dp[i] += dp[i - 2];
	}
	return dp[n];
}

int main() {
	return 0;
}
