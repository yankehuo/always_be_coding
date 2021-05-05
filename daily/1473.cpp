#include <iostream>
using namespace std;
class Solution {
public:
	int mincost(vector<int> &houses, vector<vector<int>> &cost, int m, int n, int target) {
		int dp[m][target + 1][n + 1];
		memset(dp, 0x3f3f3f3f, sizeof(dp));
		if (houses[0] == 0) {
			for (int k = 1; k <= n; ++k)
				dp[0][1][k] = cost[0][k - 1];
		}
		else {
			dp[0][1][houses[0]] = 0;
		}

		for (int i = 1; i < m; ++i) {
			if (houses[i] == 0) {
				for (int cur = 1; cur <= n; ++cur) {
					for (int pre = 1; pre <= n; ++pre) {
						for (int j = 1; j <= target; ++j) {
							if (cur == pre)
								dp[i][j][cur] = std::min(dp[i][j][cur], dp[i - 1][j][cur] + cost[i][cur - 1]);
							else
								dp[i][j][cur] = std::min(dp[i][j][cur], dp[i - 1][j - 1][pre] + cost[i][cur - 1]);

						}
					}
				}
			}
			else {
				int cur = houses[i];
				for (int pre = 1; pre <= n; ++pre) {
					for (int j = 1; j <= target; ++j) {
						if (cur == pre) 
							dp[i][j][cur] = std::min(dp[i][j][cur], dp[i - 1][j][cur]);
						else
							dp[i][j][cur] = std::min(dp[i][j][cur], dp[i - 1][j - 1][pre]);
					}
				}

			}
		}
		int res = *min_element(dp[m - 1][target], dp[m - 1][target] + n + 1);
		return res == 0x3f3f3f3f ? -1 : res;
	}
};
int main() {
	return 0;
}
