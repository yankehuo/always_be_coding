#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxarea(vector<int> &nums) {
		int p1 = 0, p2 = nums.size() - 1;
		int res = 0;
		while (p1 < p2) {
			int width = p2 - p1;
			int height = std::min(nums[p1], nums[p1]);
			res = std::max(res, width * height);
			if (nums[p1] < nums[p2])
				++p1;
			else
				--p2;
		}
		return res;
	}
};
int main() {
	string line;
	while (getline(cin, line)) {
		vector<int> nums;
		stringstream ss(line);
		string item;
		while (getline(ss, item, ',')) {
			nums.push_back(stoi(item));
		}
		int res = Solution().maxarea(nums);
		cout << res << "\n";
	}
	return 0;
}

