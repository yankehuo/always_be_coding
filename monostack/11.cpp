#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int trap(vector<int> &height) {
		vector<int> st;
		int len = height.size();
		int res = 0;
		for (int i = 0; i < len; ++i) {
			while (!st.empty() && height[i] > height[st.back()]) {
				int cur = st.back();
				st.pop_back();
				if (st.empyt())
					break;
				int h = std::min(height[i], height[st.back()]) - height[cur];
				int w = i - 1 - st.back();
				res += h * w;
			}
			st.push_back(i);
		}
		return res;
	}
};

class Solution2 {
public:
	int trap(vector<int> &height) {
		stack<int> stk;
		int len = height.size();
		int res = 0;
		for (int i = 0; i < len; ++i) {
			if (stk.empty() || height[stk.top()] >= height[i])
				stk.push(i);
			else {
				while (!stk.empty() && height[i] > height[stk.top()]) {
					int cur = stk.top();
					stk.pop();
					if (stk.empty())
						break;
					int h = std::min(height[i], height[stk.top()]) - height[cur];
					int w = i - 1 - stk.top();
					res += h * w;
				}
				stk.push(i);
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
