#include <bits/stdc++.h>
using namespace std;
// dp 状态压缩 binary
class Solution {
public:
	int minitime(vector<int> &jobs, int k) {
		int len = jobs.size();
		vector<int> sum(1 << len, 0);
		for (int i = 1; i < (1 << len); ++i) {
			int x = __builtin_ctz(i);
			int y = i - (1 << x);
			sum[i] = sum[y] + jobs[x];
		}

		vector<vector<int>> dp(k, vector<int>(1 << len));
		for (int i = 0; i < (1 << len); ++i)
			dp[0][i] = sum[i];
		for (int i = 1; i < k; ++i) {
			for (int j = 0; j < (1 << len); ++j) {
				int mintime = INT_MAX;
				for (int s = j; s; s = (s - 1) & j) {
					//mintime = min(min, max(dp[i - 1][j - s], sum[s]));
					int val = max(dp[i - 1][j - s], sum[s]);
					mintime = min(mintime, val);
				}
				dp[i][j] = mintime;
			}
		}
		return dp[k - 1][(1 << len) - 1];
	}
};

// dfs
class Solution2 {
public:
	int minitime(vector<int> &jobs, int k) {
		vector<int> worktime(k, 0);
		dfs(jobs, worktime, 0, 0);
		return res;
	}
private:
	int res = INT_MAX;
	void dfs(vector<int> &jobs, vector<int> &worktime, int idx, int maxtime) {
		if (idx == jobs.size()) {
			res = min(res, maxtime);
			return;
		}
		bool flag = true;
		for (int i = 0; i < worktime.size(); ++i) {
			if (worktime[i] == 0 && !flag)
				return;
			if (worktime[i] == 0)
				flag = false;
			worktime[i] += jobs[idx];
			if (max(maxtime, worktime[i])> res)
				continue;
			dfs(jobs, worktime, idx + 1, max(worktime[i], maxtime));
			worktime[i] -= jobs[idx];
		}
	}
};

int main() {
	return 0;
}
