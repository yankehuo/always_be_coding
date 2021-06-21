#include <bits/stdc++.h>
using namespace std;
int splitArray(vector<int> &nums, int m) {
	int len = nums.size();
	int dp[len + 1][m + 1];
	memset(dp, 0x7f, sizeof(dp));
	// at j--> k+1,i(第k+1个--[k]，第i个--[i])
	// preusm[i] - presum[k];
	// dp[i][j] = (dp[k][j - 1], presum(k, i))
	int presum[len + 1];
	memset(presum, 0, sizeof(presum));
	for (int i = 1; i < len + 1; ++i)
		presum[i] = presum[i - 1] + nums[i - 1];
	dp[0][0] = 0;
	for (int i = 1; i <= len; ++i) {
		for (int j = 1; j <= min(i, m); ++j) {
			for (int k = 0; k < i; ++k) {
				dp[i][j] = min(dp[i][j], max(dp[k][j - 1], presum[i] - presum[k]));
			}
		}
	}
	return dp[len][m];
}

int splitArray(vector<int> &nums, int m) {
	// list sum ---> number <= m
	int right = accumulate(nums.begin(), nums.end(), 0);
	int left = *max_element(nums.begin(), nums.end());
	while (left < right) {
		int mid = left + (right - left) / 2;
		if (check(mid, nums, m)) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return left;
}
bool check(int mid, vector<int> &nums, int m) {
	int cnt = 1;
	int sum = 0;
	for (int num : nums) {
		if (sum + num > mid) {
			++cnt;
			sum = num;
		}
		else {
			sum += num;
		}
	}
	return cnt <= m;
}

int main() {
	return 0;
}
