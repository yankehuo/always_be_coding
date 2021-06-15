#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isMatch(string s, string p) {
		int m = s.size(), n = p.size();
		int dp[m + 1][n + 1];
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1;
		for (int j = 2; j <= n; ++j) {
			if (p[j - 1] == '*' && dp[0][j - 2]) {
				dp[0][j] = 1;
			}
		}

		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (p[j - 1] == '*') {
					// why ? 
					dp[i][j] = dp[i][j - 2] || dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.');
				}
				else {
					dp[i][j] = dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
				}
			}
		}
		return dp[m][n];
	}
};
int main() {
	return 0;
}
