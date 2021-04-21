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
		for (const auto& c : t) {
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

int main() {
	return 0;
}
