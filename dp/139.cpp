#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool wordBreak(string s, vector<string> &wordDict) {
		int len = s.size();
		int dp[len + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i = 0; i <= len; ++i) {
			for (string word : wordDict) {
				int sz = word.size();
				if (i >= sz && s.substr(i - sz, sz) == word)
					dp[i] = dp[i] || dp[i - sz];
			}
		}
		return dp[len];
	}
};
int main() {
	return 0;
}
