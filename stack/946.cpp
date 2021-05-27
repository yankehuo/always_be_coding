#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool validateStackSequence(vector<int> &pushed, vector<int> &popped) {
		vector<int> stk;
		int j = 0;
		for (int i = 0; i < pushed.size(); ++i) {
			stk.push_back(pushed[i]);
			while (!stk.empty() && stk.back() == popped[j]) {
				stk.pop_back();
				++j;
			}
		}
		return stk.empty();
	}
};
int main() {
	return 0;
}
