#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<vector<int>> threesum(vector<int> &nums) {
		int len = nums.size();
		if (len < 3) return {};
		std::sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		for (int i = 0; i < len - 2; ++i) {
			// terminate
			if (nums[i] > 0)
				break;
			// remove dup
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int target = -nums[i];
			// i + 1, len - 1
			int left = i + 1, right = len - 1;
			while (left < right) {
				if (nums[left] + nums[right] < target) {
					++left;
				}
				else if (nums[left] + nums[right] > target) {
					--right;
				}
				else {
					res.push_back({nums[i], nums[left], nums[right]});
					++left;
					--right;
					while (left < right && nums[left] == nums[left - 1])
						++left;
					while (left < right && nums[right] == nums[right + 1])
						--right;
				}
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
