#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int romanToint(string s) {
		int res = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (i > 0 && kv[s[i]] > kv[s[i - 1]])
				res += kv[s[i]] - 2 * kv[s[i - 1]];
			else
				res += kv[s[i]];
		}
		return res;
	}
	unordered_map<char, int> kv = {
		{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
	};
};
int main() {
	return 0;
}
