#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	// exist problems
	int numSquare(int n) {
		int cnt = 0;
		while (n >= 1) {
			int sq = sqrt(n);
			n -= sq;
			++cnt;
		}
	}
	return cnt;


	// dp
	int numSquare(int n) {
		// dp[j] = dp[j - i * i] + 1, min
		// dp[j] = dp[j - num], min
		int dp[n + 1];
		memset(dp, 0x0f0f0f0f, sizeof(dp));
		dp[0] = 0;
		for (int i = sqrt(n); i >= 1; --i) {
			for (int j = 1; j <= n; ++j) {
				dp[j] = min(dp[j], dp[j - i * i] + 1);
			}
		}
		return dp[n];
	}


	// theory of 4
	int numSquare(int n) {
		if (isPerfect(n))
			return 1;
		if (checkAnswer4(n))
			return 4;
		for (int i = 1; i * i <= n; ++i) {
			int j = n - i * i;
			if (isPerfect(j))
				return 2;
		}
		return 3;
	}

	bool isPerfect(int x) {
		int y = sqrt(x);
		return y * y == x;
	}
	bool checkAnswer4(int x) {
		while (x % 4 == 0) {
			x /= 4;
		}
		return x % 8 == 7;
	}
};
int main() {
	return 0;
}
