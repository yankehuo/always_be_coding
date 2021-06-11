#include <bits/stdc++.h>
using namespace std;
class Solutoin {
public:
	int LIS(vector<int> &nums) {
		// discontinuity
		int len = nums.size();
		int dp[len];
		memset(dp, 0, sizeof(dp));
		int res = 0;
		for (int i = 0; i < len; ++i) {
			dp[i] = 1;
			for (int j = 0; j < i; ++j) {
				if (nums[i] > nums[j])
					dp[i] = max(dp[i], dp[j] + 1);
			}
			res = max(res, dp[i]);
		}
		return res;
	}

	int LIS(vector<int> &nums) {
		int len = nums.size();
		int dp[len];
		memset(dp, 0x0f, sizeof(dp));
		for (int i = 0; i < len; ++i) {
			// lower_bound找到第一个合适的插入元素
			*lower_bound(dp, dp + len, nums[i]) = nums[i];
		}
		return lower_bound(dp, dp + len, 10001) - dp;
	}
};
int main() {
	return 0;
}
