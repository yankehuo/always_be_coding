#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> getDays(vector<int> &T) {
		vector<int> stk;
		vector<int> res(T.size());
		int i = 0;
		while (i < T.size()) {
			if (stk.empty() || (i < T.size() && T[stk.back()] >= T[i])) {
				stk.push_back(i++);
			}
			else {
				int tmp = stk.back();
				stk.pop_back();
				res[tmp] = i - tmp;
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
