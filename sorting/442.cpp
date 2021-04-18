#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> finddup(vector<int> &nums) {
		vector<int> res;
		for (int i = 0; i != nums.size(); ++i) {
			if (nums[nums[i] - 1] != nums[i]) {
				swap(nums[i], nums[nums[i] - 1]);
			}
		}
		for (int i = 0; i != nums.size(); ++i) {
			if (i + 1 != nums[i]) {
				res.push_back(nums[i]);
			}
		}
		return res;
	}
	// swap 使用^  or +
	// a = a^b		a = a + b
	// b = a^b		b = a - b
	// a = a^b		a = a - b
	
	// +- hash
	vector<int> finddup2(vector<int> &nums) {
		vector<int> res;
		for (int i = 0; i != nums.size(); ++i) {
			if (nums[abs(nums[i]) - 1] < 0)
				res.push_back(abs(nums[i]));
			nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
		}
		return res;
	}
};
int main() {
	return 0;
}
