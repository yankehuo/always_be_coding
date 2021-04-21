#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> geteven(vector<int> &nums) {
		return geteven2(nums, 0);
	}
private:
	// why ? not convert from void to vector
	vector<int> geteven2(vector<int> &nums, int index) {
		if (index == nums.size())
			return {};
		vector<int> res = geteven2(nums, index + 1);
		int num = nums[index];
		if (num % 2 == 0)
			//return geteven(nums, index + 1).push_back(0);
			return res.push_back(num);
		else
			//return geteven(nums, index + 1);
			return res;
	}
};
int main() {
	vector<int> numtest = {};
	cout << "hello" << endl;
	numtest.push_back(1);
	cout << "1:" << endl;
	vector<int> nums = { 1, 2, 3, 4, 5, 6, 9 };
	vector<int> nums2 = {1};
	vector<int> res1 = Solution().geteven(nums2);
	for (const auto& num : res1) {
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
