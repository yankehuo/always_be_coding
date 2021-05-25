#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minPrint(string s) {
		// get minimum
		// dp[i][j] = dp[i][j - 1], if s[i] == s[j]
		// dp[i][j] = dp[i][k] + dp[k + 1][j], if s[i] != s[j]
		int len = s.size();
		int dp[len][len];
		memset(dp, 0, sizeof(dp));
		for (int i = len - 1; i >= 0; --i) {
			dp[i][i] = 1;
			for (int j = i + 1; j < len; ++j) {
				if (s[i] == s[j]) {
					dp[i][j] = dp[i][j - 1];
				}
				else {
					int minval = INT_MAX;
					for (int k = i; k < j; ++k) {
						minval = min(minval, dp[i][k] + dp[k + 1][j]);
					}
					dp[i][j] = minval;
				}
			}
		}
		return dp[0][len - 1];
	}
};

int main() {
	return 0;
}
