#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int trap(vector<int> &height) {
		int len = height.size();
		int leftmax = 0, rightmax = 0;
		int left = 0, right = len - 1;
		int res = 0;
		while (left < right) {
			leftmax = std::max(leftmax, height[left]);
			rightmax = std::max(rightmax, height[right]);
			// leftmax >= height[left] < height[right]
			if (height[left] < height[right]) {
				// height[left] < height[right] <= rightmax
				res += leftmax - height[left];
				++left;
			}
			// height[left] >= height[right] <= rightmax
			else {
				res += rightmax - height[right];
				--right;
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
