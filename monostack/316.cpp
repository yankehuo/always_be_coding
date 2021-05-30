#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	string removeDuplicate(string s) {
		vector<int> seen(26), num(26);
		for (char ch : s)
			++num[ch - 'a'];
		string stk;
		for (char ch : s) {
			if (!seen[ch - 'a']) {
				while (!stk.empty() && stk.back() > ch) {
					if (num[stk.back() - 'a'] > 0) {
						seen[stk.back() - 'a'] = 0;
						stk.pop_back();
					}
					else {
						break;
					}
				}
				seen[ch - 'a'] = 1;
				stk.push_back(ch);
			}
			num[ch - 'a'] -= 1;
		}
		return stk;
	}
};
class Solution {
public:
	string removeDuplicate(string s) {
		int len = s.size();
		vector<bool> seen(len);
		vector<int> cnt(len);
		string stk;
		for (char ch : s)
			++cnt[ch - 'a'];
		for (char ch : s) {
			--cnt[ch - 'a'];
			if (seen[ch - 'a']) {
				continue;
			}
			while (!stk.empty() && ch < stk.back() && cnt[stk.back() - 'a']) {
				seen[ch - 'a'] = false;
				stk.pop_back();
			}
			stk.push_back(ch);
			seen[ch - 'a'] = true;
		}
		return stk;
	}
};
int main() {
	return 0;
}
