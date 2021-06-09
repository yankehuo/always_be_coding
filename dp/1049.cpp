#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int lastStoneWeightII(vector<int> &stones) {
		// target = sum - neg - neg ---> min
		int sum = 0;
		for (int stone : stones)
			sum += stone;
		int neg = sum / 2;
		int dp[neg + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 0;
		for (int stone : stones) {
			for (int j = neg; j >= stone; --j) {
				dp[j] = max(dp[j], dp[j - stone] + stone);
			}
		}
		return sum - dp[neg] * 2;
	}
};
int main() {
	return 0;
}
