#include <bits/stdc++.h>
using namespace std;
class Solution {
public: 
	int threeclosest(vector<int> &nums) {
		sort(nums.begin(), nums.end());
		int res = 0, mingap = INT_MAX;
		int len = nums.size();
		for (int i = 0; i < len; ++i) {
			int left = i + 1, right = len - 1;
			while (left < right) {
				int sum = nums[i] + nums[left] + nums[right];
				if (sum == target) return sum;
				if (abs(sum - target) < mingap) {
					mingap = abs(sum - target);
					res = sum;
				}
				if (sum < target) 
					++left;
				else
					--right;
			}
		}
		return res;
	}
};
int main() {

	return 0;
}
