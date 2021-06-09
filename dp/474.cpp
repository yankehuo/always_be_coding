#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findMaxForm(vector<string> &strs, int m, int n) {
		// i---item, j---zeros, k---ones
		int len = strs.size();
		int dp[m + 1][n + 1];
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 0;
		for (string &s : strs) {
			pair<int, int> pa = getCnt(s);
			int zeros = pa.first;
			int ones = pa.second;
			for (int j = m; j >= zeros; --j) {
				for (int k = n; k >= ones; --k) {
					dp[j][k] = max(dp[j][k], dp[j - zeros][k - ones] + 1);
				}
			}
		}
		return dp[m][n];

	}
private:
	pair<int, int> getCnt(string &s) {
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
