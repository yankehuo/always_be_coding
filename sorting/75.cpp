#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	void sortColors(vector<int> &nums) {
		int lt = 0, gt = nums.size();
		int i = 0;
		// [0, lt) ==0
		// [lt, i) ==1
		// [gt, sz) == 2
		while (i < gt) {
			if (nums[i] == 0) {
				swap(nums[i], nums[lt]);
				++lt;
				++i;
			}
			else if (nums[i] == 2) {
				--gt;
				swap(nums[i], nums[gt]);
			}
			else {
				++i;
			}
		}
	}
};
int main() {
	return 0;
}
