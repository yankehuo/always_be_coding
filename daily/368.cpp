#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> largestsubsets(vector<int> &nums) {
		// dp[i] = dp[j] + 1, if % == 0
		std::sort(nums.begin(), nums.end());
		int sz = nums.size();
		vector<int> dp(sz, 0);
		vector<int> parent(sz, 0);
		int maxvalue = 0;
		int maxidx = 0;

		for (int i = sz - 1; i >= 0; --i) {
			for (int j = i; j < sz; ++j) {
				if (nums[j] % nums[i] == 0 && dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
					parent[i] = j;
				}
			}
			if (dp[i] > maxvalue) {
				maxvalue = dp[i];
				maxidx = i;
			}
		}

		vector<int> res;
		for (int i = 0; i != maxvalue; ++i) {
			res.push_back(nums[maxidx]);
			maxidx = parent[maxidx];
		}

		return res;
	}
};

int main() {
	return 0;
}

