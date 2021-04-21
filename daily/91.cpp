#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numdecodings(string s) {
		// dp[i] = dp[i - 1] + dp[i - 2]
		int n = s.size();
		if (s[0] == '0' || n == 0) return 0;
		if (n == 1) return 1;
		vector<int> dp(n + 1, 0);
		dp[0] = 1;
		// numbers before i 
		dp[1] = 1;
		// 102 --> 10 2 --> dp[i - 2]

		for (int i = 2; i <= n; ++i) {
			// the ith
			if (s[i - 1] != '0')
				dp[i] = dp[i - 1];
			int num = std::stoi(s.substr(i - 2, 2));
			if (num <= 26 && num >= 10) 
				dp[i] += dp[i - 2];
		}
		return dp[n];
	}
};

int main {
	return 0;
}
