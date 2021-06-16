#include <bits/stdc++.h>
using namespace std;
bool PredictTheWinner(vector<int> &nums) {
	int len = nums.size();
	if (!(len & 0x1))
		return true;
	int dp[len][len];
	memset(dp, 0, sizeof(dp));
	// dp[i][j] --> i..j difference
	for (int i = 0; i != len; ++i)
		dp[i][i] = nums[i]; 
	for (int i = len - 1; i >= 0; --i) {
		for (int j = i + 1; j < len; ++j) {
			dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
		}
	}
	return dp[0][len - 1] >= 0;
}
int main() {
	return 0;
}
