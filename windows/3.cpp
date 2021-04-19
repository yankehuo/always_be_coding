#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int length(string s) {
		int left = 0;
		int n = s.size();
		if (n < 2) return n;
		int res = 0;
		unordered_map<char, int> mp;
		for (int right = 0; right != n; ++right) {
			char c = s[right];
			if (mp.count(c)) {
				if (mp[c] >= left) {
					left = mp[c] + 1;
				}
			}
			res = max(res, right - left + 1);
			mp[c] = right;
			// mp.insert({c, right}); why?
			// if two keys equal, not update
		}
		return res;
	}
};

class Solution2 {
public:
	int length(string s) {
		int left = 0;
		int n = s.size();
		if (n < 2) return n;
		int res = 0;
		unordered_map<char, int> mp;
		for (int right = 0; right != n; ++right) {
			char c = s[right];
			++mp[c];
			while (mp[c] == 2) {
				char leftc = s[left];
				++left;
				--mp[leftc];
			}
			res = max(res, right - left + 1);
		}
		return res;
	}
}

int main() {
	return 0;
}
