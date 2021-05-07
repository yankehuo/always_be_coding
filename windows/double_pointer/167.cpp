#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> findtarget(vector<int> &nums, int target) {
		int len = nums.size();
		vector<int> res;
		int left = 0, right = len - 1;
		while (left < right) {
			if (left > 0 && nums[left] == nums[left - 1]) {
				++left;
				continue;
			}
			if (nums[left] > target) return {};
			if (nums[left] + nums[right] < target)
				++left;
			else if (nums[left] + nums[right] > target)
				--right;
			else {
				res.push_back(left + 1);
				res.push_back(right + 1);
				break;
			}
		}
		return res;
	}
};

class Solution2 {
public:
	vector<int> findtarget(vector<int> &nums, int target) {
		int len = nums.size();
		vector<int> res;
		for (int i = 0; i < len; ++i) {
			int one = i;
			auto it =  std::lower_bound(nums.begin() + i + 1, nums.end(), target - nums[i]);
			if (it == nums.end() || *it != target - nums[i])
				continue;
			int two = it - nums.begin();
			return {one + 1, two + 1};
		}
		return res;
	}
};

class Solution3 {
public:
	vector<int> findtarget(vector<int> &nums, int target) {
		int len = nums.size();
		vector<int> res;
		for (int i = 0; i < len; ++i) {
			int left = i + 1, right = len - 1;
			while (left <= right) {
				int mid = left + (right - left) / 2;
				if (nums[i] == target - nums[mid])
					return {i + 1, mid + 1};
				else if (nums[i] < target - nums[mid])
					left = mid + 1;
				else
					right = mid - 1;
			}
		}
		return res;
	}
};

int main() {
	return 0;
}
