#include <bits/stdc++.h>
using namespace std;

vector<int> getIndex(vector<int> &nums, int target) {
	unordered_map<int, int> mp;
	int n = nums.size();
	for (int i = 0; i < n; ++i) {
		if (mp.count(target - nums[i])) {
			return {mp[target - nums[i]], i};}
		mp[nums[i]] = i;
	}
	return {-1, -1};
}

int main() {
	vector<int> nums = {1, 3, 5, 9};
	int target = 8;
	vector<int> res = getIndex(nums, target);
	for (int num : res) {
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
