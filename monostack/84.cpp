#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int largestRectangleArea(vector<int> &heights) {
		vector<int> stk;
		int len = heights.size();
		int i = 0;
		int res = 0;
		while (i < len || !stk.empty()) {
			if (stk.empty() || (i < len && heights[stk.back()] <= heights[i])) {
				stk.push_back(i);
				++i;
			}
			else {
				int h = heights[stk.back()];
				stk.pop_back();
				int w = stk.empty() ? i : i - 1 - stk.back();
				res = max(res, h * w);
			}
		}
		return res;
	}
};

int main() {
	return 0;
}
