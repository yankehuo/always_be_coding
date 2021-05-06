#include <bits/stdc++.h>
using namespace std;
int charreplace(string s, int k) {
	if (s.empty()) return 0;
	int maxcnt = 0, len = s.size();
	int cntflag = 0;
	int maxlen = 0;
	int left = 0;
	unordered_map<char, int> mp;
	for (int right = 0; right < len; ++right) {
		++mp[s[right]];
		maxcnt = std::max(maxcnt, mp[s[right]]);
		if (right - left + 1 > maxcnt + k) {
			--mp[s[left++]];
		}
		maxlen = std::max(maxlen, right - left + 1);
	}
	return maxlen;
};
int main() {
	ios::sync_with_stdio(false);
	// cin.tie(0);
	string s;
	int k;
	while (cin >> s >> k) {
		//string s = line;
		//getline(cin, line);
		//int k = stoi(line);

		int res = charreplace(s, k);
		cout << res << "\n";
		// printf("%d\n", res);
	}
	return 0;
}

