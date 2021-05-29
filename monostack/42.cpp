#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int trap(vector<int> &height) {
		int res = 0;
		vector<int> stk;
		int i = 0;
		while (i < height.size()) {
			if (stk.empty() || (i < height.size() && height[stk.back()] >= height[i])) {
				stk.push_back(i++);
			}
			else {
				int tmp = stk.back();
				stk.pop_back();
				if (stk.empty()) {
					continue;
				}
				int h = min(height[stk.back()], height[i]) - height[tmp];
				int w = i - 1 - stk.back();
				res += h * w;
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
