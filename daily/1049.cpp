#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	// proof: 解在正负号添加的构成的差值空间里
	// S(ki*stonesi), ki{-1, 1}
	// == sum - neg - neg      --->min--->neg max
	int lastStoneWightII(vector<int> &stones) {
		int sum = 0;
		for (int stone : stones)
			sum += stone;
		int target = sum / 2;
		int dp[target + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 0;
		for (int stone : stones) {
			for (int j = target; j >= stone; --j) {
				dp[j] = max(dp[j], dp[j - stone] + stone);
			}
		}
		return sum - dp[target] * 2;

	}
};
int main() {
	return 0;
}
