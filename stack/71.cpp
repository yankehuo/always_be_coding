#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	string simplifyPath(string path) {
		vector<string> stk;
		string tmp;
		string res;
		stringstream ss(path);
		while (getline(ss, tmp, '/')) {
			if (tmp == "" || tmp ==".")
				continue;
			if (tmp == ".." && !stk.empty()) {
				stk.pop_back();
			}
			else if (tmp != "..") {
				stk.push_back(tmp);
			}
		}
		for (string s : stk) {
			res = res + "/" + s;
		}
		return stk.empty() ? "/" : res;
	}
};
int main() {
	return 0;
}
