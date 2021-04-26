#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int permutation(vector<int> &nums, int target) {
		// dp[i] --> numbers of == i
		// dp[i] = dp[i] + dp[i - num]
		vector<unsigned long> dp(target + 1, 0);
		dp[0] = 1;
		for (int i = 1; i != target + 1; ++i) {
			for (const int num : nums) {
				if (i - num >= 0) {
					dp[i] += dp[i - num]; 
				}
			}
		}
		return dp[target];
	}
};
int main() {
	return 0;
}
