#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	NumArray(vector<int> &nums) {
		presum.resize(nums.size() + 1);
		std::partial_sum(nums.begin(), nums.end(), presum.begin() + 1);
	}
	int sumRange(int left, int right) {
		return presum[right + 1] - presum[left];
	}
private:
	vector<int> presum;
};
int main() {
	return 0;
}
