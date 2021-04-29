#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	string minWindow(string s, string t) {
		// hashtable
		unordered_map<char, int> scnt;
		unordered_map<char, int> tcnt;
		string res;
		int len = s.size() + 1;
		int idx = -1;
		int cnt = t.size();
		for (const auto &c : t) {
			++tcnt[c];
		}
		int left = 0;
		for (int right = 0; right != s.size(); ++right) {
			// --->
			++scnt[s[right]];
			if (scnt[s[right]] <= tcnt[s[right]]) {
				--cnt;
			}
			while (left <= right && cnt == 0) {
				--scnt[s[left]];
				if (scnt[s[left]] < tcnt[s[left]]) 
					++cnt;
				if (cnt > 0) {
					if (len  > right - left + 1) {
						len = right - left + 1;
						idx = left;
					}
				}
				++left;
			}
		}
		return idx == -1 ? "" : s.substr(idx, len);
	}
};
class Solution2 {
public:
	string miniwindow(string s, string t) {
		int minlen = s.size() + 1, strstart = 0, matched = 0;
		unordered_map<char, int> tfreq;
		for (const auto &c : t) {
			++tfreq[c];
		}
		int left = 0;
		for (int right = 0; right != s.size(); ++right) {
			char rightchar = s[right];
			if (tfreq.find(rightchar) != tfreq.end()) {
				--tfreq[rightchar];
				if (tfreq[rightchar] >= 0) {
					++matched;
				}
			}
			while (matched == t.size()) {
				if (minlen > right - left + 1) {
					minlen = right - left + 1;
					strstart = left;
				}
				char leftchar = s[left++];
				if (tfreq.find(leftchar) != tfreq.end()) {
					if (tfreq[leftchar] == 0) {
						--matched;
					}
					++tfreq[leftchar];
				}
			}
		}
		return minlen > s.size() ? "" : s.substr(strstart, minlen);
	}
};

int main() {
	string line;
	while (getline(cin, line)) {
		string s = line;
		getline(cin, line);
		string t = line;

		string res = Solution2().miniwindow(s, t);

		cout << res << endl;
	}
	return 0;
}
