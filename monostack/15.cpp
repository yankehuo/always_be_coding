#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int laregearea(vector<int> &heights) {
		int len = heights.size();
		int res = 0;
		stack<int> stk;
		int i = 0;
		while (i < len || !stk.empyt()) {
			if (stk.empty() || (i < len && heights[i] >= heights[stk.top()])) {
				stk.push(i++);
			}
			else {
				int cur = stk.top();
				stk.pop();
				int h = heights[cur];
				int w = stk.empty() ? i : i - stk.top() - 1;
				res = std::max(res, h * w);
			}
		}
		return res;
	}
};

class Solution2 {
public:
	int laregearea(vector<int> &heights) {
		int res = 0;
		stack<int> stk;
		heights.push(0);
		int len = heights.size();
		int i = 0;
		while (i < len) {
			if (stk.empty() || heights[i] >= heights[stk.top()]) {
				stk.push(i++);
			}
			else {
				int cur = stk.top();
				stk.pop();
				int h = heights[cur];
				int w = stk.empty() ? i : i - stk.top() - 1;
				res = std::max(res, h * w);
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
