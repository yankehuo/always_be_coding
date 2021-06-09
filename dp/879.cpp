#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int profitableSchemes(int n, int minProfit, vector<int> &group, vector<int> &profit) {
		// i-->jobs, j-->members, k-->min profit
		// dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - group[i]][max(0, k - profit[i])];
		// 
	}
};

int main() {
	return 0;
}
