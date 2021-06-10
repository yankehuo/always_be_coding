#include <bits/stdc++.h>
using namespace std;
class Soluton {
public:
	int superEggDrop(int K, int N) {
		int dp[N + 1][K + 1];
		// dp[i][j] == min max(dp[i - k][j], dp[k - 1][j - 1])  + 1
		// i-->floors, j-->eggs
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= N; ++i) {
			dp[i][1] = i;
		}
		for (int j = 1; j <= K; ++j) {
			dp[1][j] = 1;
		}
		for (int i = 2; i <= N; ++i) {
			for (int j = 2; j <= K; ++j) {
				// int res = INT_MAX;
				for (int k = 1; k <= i; ++k) {
					// res = min(res, max(dp[i - k][j], dp[k - 1][j - 1]) + 1);
					dp[i][j] = min(dp[i][j], max(dp[k - 1][j - 1], dp[i - k][j]) + 1);
				}
				// dp[i][j] = res;
			}
		}
		return dp[N][K];
	}

	int superEggDrop(int K, int N) {
		int dp[N + 1][K + 1];
		// dp[i][j] == min max(dp[i - k][j], dp[k - 1][j - 1])  + 1
		// i-->floors, j-->eggs
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= N; ++i) {
			dp[i][1] = i;
		}
		for (int j = 1; j <= K; ++j) {
			dp[1][j] = 1;
		}
		for (int i = 2; i <= N; ++i) {
			for (int j = 2; j <= K; ++j) {
				// int res = INT_MAX;
				// right-->i
				int left = 1, right = i;
				while (left < right) {
					// 上取值
					int mid = left + (right - left + 1) / 2;
					if (dp[mid - 1][j - 1] > dp[i - mid][j]) {
						right = mid - 1;
					}
					else {
						// 上取值
						left = mid;
					}
				}
				// res = min(res, max(left))
				// left-->best
				dp[i][j] = max(dp[left - 1][j - 1], dp[i - left][j]) + 1;
			}
		}
		return dp[N][K];

	}

	int superEggDrop(int K, int N) {
		// dp[j][m] = dp[j - 1][m - 1] + dp[j][m - 1] + 1
		int dp[K + 1][N + 1];
		memset(dp, 0, sizeof(dp));
		int m = 0;
		// < -- m <= N
		for (; dp[K][m] < N; ) {
			++m;
			for (int j = 1; j <= K; ++j) {
				dp[j][m] = dp[j - 1][m - 1] + dp[j][m - 1] + 1;
			}
		}
		return m;
	}

	int superEggDrop(int K, int N) {
		int dp[K + 1];
		memset(dp, 0, sizeof(dp));
		int m = 0;
		// <
		for (; dp[K] < N; ++m) {
			for (int i = K; i > 0; --i) {
				dp[i] = dp[i - 1] + dp[i] + 1;
			}
		}
		return m;
	}
};


int main() {
	return 0;
}
