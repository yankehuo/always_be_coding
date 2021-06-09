#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int longestValidParentheses(string s) {
		// dp[i] = dp[i - 2] + 2;
		// dp[i] = dp[i - dp[i - 1] - 2] + dp[i - 1] + 2;
		int len = s.size();
		if (len == 0)
			return 0;
		int res = 0;
		int dp[len];
		memset(dp, 0, sizeof(dp));
		dp[0] = 0;
		for (int i = 1; i < len; ++i) {
			if (s[i] == ')') {
				if (s[i - 1] == '(') {
					if (i >= 2)
						dp[i] = dp[i - 2] + 2;
					else
						dp[i] = 2;
				}
				else if (i - dp[i - 1] - 1 >= 0 && s[i - dp[i - 1] - 1] == '(') {
					if (i - dp[i - 1] >= 2)
						dp[i] = dp[i - 1] + 2 + dp[i -  dp[i - 1] - 2];
					else
						dp[i] = dp[i - 1] + 2;
				}
				res = max(res, dp[i]);

			}
		}
		return res;
	}
};
int main() {
	return 0;
}
