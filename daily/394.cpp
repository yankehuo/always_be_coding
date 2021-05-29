#include <bits/stdc++.h>
using namespace std;
using PA = pair<int, string>;
class Solution {
public:
	string decodeString(string s) {
		vector<PA> stk;
		int num = 0;
		string res = "";
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] >= '0' && s[i] <= '9') {
				num = num * 10 + s[i] - '0';
			}
			else if(s[i] == '[') {
				stk.push_back(make_pair(num, res));
				num = 0;
				res = "";
			}
			else if(s[i] == ']') {
				int repnum = stk.back().first;
				string pre = stk.back().second;
				stk.pop_back();
				for (int j = 0; j < repnum; ++j) {
					pre = pre + res;
				}
				res = pre;
			}
			else {
				res += s[i];
			}
		}
		return res;
	}
};
class Solution {
public:
	string decodeString(string s) {
		int i = 0;
		return decodeString(s, i);
	}
private:
	string decodeString(string s, int &i) {
		// terminate
		string res;
		while (i < s.size() && s[i] != ']') {
			if (!isdigit(s[i])) {
				res += s[i++];
			}
			else {
				int num = 0;
				while (i < s.size() && isdigit(s[i++])) {
					num = num * 10 + s[i] - '0';
				}
				++i;
				string tmp = decodeString(s, i);
				++i;
				while (num-- > 0) {
					res += tmp;
				}
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
