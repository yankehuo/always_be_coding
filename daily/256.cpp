#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int mincost(vector<vector<int>> &costs) {
		int rows = costs.size();
		int dp[rows][3];
		memset(dp, 0x3f3f3f3f, sizeof(dp));
		dp[0][0] = costs[0][0];
		dp[0][1] = costs[0][1];
		dp[0][2] = costs[0][2];
		for (int i = 1; i < rows; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int j2 = 0; j2 < 3; ++j2) {
					if (j2 == j) continue;
					dp[i][j] = std::min(dp[i][j], dp[i - 1][j2] + costs[i][j]);
				}
			}
		}
		int res = *min_element(dp[rows - 1], dp[rows - 1] + 3);
		return res == 0x3f3f3f3f ? -1 : res;
	}
};
int main() {
	return 0;
}
