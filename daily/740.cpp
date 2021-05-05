#include <bits/stdc++.h>
using namespace std;
int delearn(vector<int> &nums) {
	int maxval = *max_element(nums.begin(), nums.end());
	vector<int> dp(maxval + 1);
	vector<int> cnt(maxval + 1);
	for (int num : nums)
		++cnt[num];
	dp[0] = 0;
	dp[1] = cnt[1];
	// dp[i] = dp[i - 1], dp[i - 2] + sum[i]
	for (int i = 2; i <= maxval; ++i)
		dp[i] = std::max(dp[i - 1], dp[i - 2] + cnt[i] * i);
	return dp[maxval];
}
int main() {
	return 0;
}
