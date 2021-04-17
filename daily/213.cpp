#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int rob(vector<int> &nums) {

	}
private:
	int myrob(vector<int> &nums, int left, int right) {
		// dp[i] = dp[i - 1], dp[i - 2] + nums[i]
		vector<int> dp(right - left + 2);
		dp[left] =  nums[left];
		dp[left + 1] = max(nums[left], nums[eft + 1]);
	}
};

int main() {
	return 0;
}
