#include <bits/stdc++.h>
using namespace std;
int findLongestChain(vector<vector<int>> &pairs) {
	int n = pairs.size();
	int dp[n];
	memset(dp, 0, sizeof(dp));
	fill(dp, dp + n, 1);
	sort(pairs.begin(), pairs.end(), 
			[](vector<int> &e1, vector<int> &e2) {
				return e1[0] < e2[0] || (e1[0] == e2[0] && e1[1] < e2[1]);
			}
			);
	int res = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (pairs[j][1] < pairs[i][0])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(res, dp[i]);
	}
	return res;
}

int findLongestChain(vector<vector<int>> pairs) {
	int n = pairs.size();
	sort(pairs.begin(), pairs.end(), 
			[](const auto &e1, const auto &e2) {
				return e1[1] < e2[1] || (e1[1] == e2[1] && e1[0] < e2[0]);
			}
			);
	int end = pairs[0][1];
	int res = 1;
	for (int i = 1; i < n; ++i) {
		if (end < pairs[i][0]) {
			end = pairs[i][1];
			++res;
		}
	}
	return res;
}

int main() {
	return 0;
}
