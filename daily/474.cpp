#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findMaxForm(vector<string> &strs, int m, int n) {
		// ijk   i--items j--cap1 k--cap2
		// dp[i][j][k] = dp[i - 1][j][k], dp[i - 1][j - zeros][k - ones]
		int len = strs.size();
		int dp[len][m + 1][n + 1];
		memset(dp, 0, sizeof(dp));

		auto pa = getcnt(strs[0]);
		for (int j = 0; j <= m; ++j) {
			for (int k = 0; k <= n; ++k) {
				if (j >= pa.first && k >= pa.second) {
					dp[0][j][k] = 1;
				}
				else {
					dp[0][j][k] = 0;
				}
			}
		}

		for (int i = 1; i < len; ++i) {
			pa = getcnt(strs[i]);
			for (int j = 0; j <= m; ++j) {
				for (int k = 0; k <= n; ++k) {
					if (j >= pa.first && k >= pa.second) {
						dp[i][j][k] = max(dp[i - 1][j][k], dp[i - 1][j - pa.first][k - pa.second] + 1);
					}
					else {
						dp[i][j][k] = dp[i - 1][j][k];
					}
				}
			}
		}
		return dp[len - 1][m][n];
	}
private:
	pair<int, int> getcnt(string &s) {
		int zeros = 0, ones = 0;
		for (char ch : s) {
			if (ch == '0')
				++zeros;
			else
				++ones;
		}
		return make_pair(zeros, ones);
	}

};
int main() {
	return 0;
}
