#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit) {
		// package -- choose items
		// i---jobs, j---members, k---profit(at least)
		const int kMOD = 1e9 + 7;
		int len = group.size();
		int dp[len + 1][n + 1][minProfit + 1];
		memset(dp, 0, sizeof(dp));
		// 恰好j个人
		dp[0][0][0] = 1;
		// 用到<=j个人
		// for (int j = 0; j <= n; ++j)
		//	dp[0][j][0] = 1;
		for (int i = 1; i <= len; ++i) {
			for (int j = 0; j <= n; ++j) {
				for (int k = 0; k <= minProfit; ++k) {
					if (j < group[i - 1]) {
						dp[i][j][k] = dp[i - 1][j][k];
					}
					else {
						dp[i][j][k] = (dp[i - 1][j][k] + dp[i - 1][j - group[i - 1]][max(0, k - profit[i - 1])]) % kMOD;
					}
				}
			}
		}
		int sum = 0;
		for (int j = 0; j <= n; ++j)
			sum = (sum + dp[len][j][minProfit]) % kMOD;
		return sum;
		// return dp[len][n][minProfit];
	}

	int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit) {
		const int kMOD = 1e9 + 7;
		int len = group.size();
		int dp[n + 1][minProfit + 1];
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i <= n; ++i)
			dp[i][0] = 1;
		for (int i = 1; i <= len; ++i) {
			for (int j = n; j >= group[i - 1]; --j) {
				// k--0 at least
				for (int k = minProfit; k >= 0; --k) {
					dp[j][k] = (dp[j][k] + dp[j - group[i - 1]][max(0, k - profit[i - 1])]) % kMOD;
				}
			}
		}
		return dp[n][minProfit];
	}
};
int main() {
	return 0;
}
