#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
class Solution {
public:
	in numWays(int steps, int arrLen) {
		// dp[i][j], i--step, j--index
		vector<vector<int>> dp(steps + 1, vector<int>(arrLen, 0));
		dp[0][0] = 1;
		for (int j = 1; j < arrLen; ++j)
			dp[0][j] = 0; 
		// dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]
		// j + 1 < arrLen
		for (int i = 1; i <= steps; ++i) {
			for (int j = 0; j < arrLen; ++j) {
				dp[i][j] = dp[i - 1][j];
				if (j - 1 >= 0) {
					dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % mod;
				}
				if (j + 1 < arrLen) {
					dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % mod;
				}
			}
		}
		return dp[steps][0];
	}
};

class Solution {
public:
	in numWays(int steps, int arrLen) {
		// dp[i][j], i--step, j--index
		arrLen = std::min(arrLen, steps / 2 + 1);
		vector<int> dp(arrLen, 0);
		dp[0] = 1;
		// dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]
		// j + 1 < arrLen
		for (int i = 1; i <= steps; ++i) {
			vector<int> dpnext(arrLen, 0);
			for (int j = 0; j < arrLen; ++j) {
				dpnext[j] = dp[j];
				if (j - 1 >= 0) {
					dpnext[j] = (dpnext[j] + dp[j - 1]) % mod;
				}
				if (j + 1 < arrLen) {
					dpnext[j] = (dpnext[j] + dp[j + 1]) % mod;
				}
			}
			dp = dpnext;
		}
		return dp[0];
	}
};

int main() {
	return 0;
}
