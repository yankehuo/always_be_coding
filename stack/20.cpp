#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		unordered_map<char, char> kv{{')','('}, {'}', '{'}, {']', '['}};
		vector<char> stk;
		for (char c : s) {
			if (kv.count(c)) {
				if (stk.empty() || stk.back() != kv[c]) {
					return false;
				}
				stk.pop_back():
			}
			else {
				stk.push_back(c);
			}
		}
		return stk.empty();
	}
};
int main() {
	return 0;
}
