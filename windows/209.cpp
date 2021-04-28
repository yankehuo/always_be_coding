#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minsubarr(int target, vector<int> &nums) {
		int n = nums.size(), minlen = n + 1;
		int left = 0;
		int sum = 0;
		for (int right = 0; right != n; ++right) {
			sum += nums[right];
			while (sum >= target) {
				if (sum >= target) {
					minlen = std::min(minlen, right - left + 1);
				}
				sum -= nums[left++];
			}
		}
		return minlen == n + 1 ? 0 : minlen;
	}
};
int main() {
	string line;
	while (getline(cin, line)) {
		int target = stoi(line);
		getline(cin, line);
		vector<int> nums;
		stringstream ss(line);
		string item;
		while (getline(ss, item, ','))
			nums.push_back(stoi(item));
		int res = Solution().minsubarr(target, nums);
		cout << res << endl;
	}
	return 0;
}
