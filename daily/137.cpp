#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int singlenum(vector<int> &nums) {
		unordered_map<int, int> freq;
		for (const auto &num : nums) {
			++freq[num];
		}
		for (const auto &num : nums) {
			if (freq[num ]== 1)
				return num;
			else 
				continue;
		}
		return -1;
	}
};

class Solution2 {
public:
	int singlenum(vector<int> &nums) {
		int  res = 0;
		for (int i = 0; i < 32; ++i) {
			int total = 0;
			for (int num : nums) {
				//cout << "num:" << num << "\n";
				total += ((num >> i) & 1);
			}
			if (total % 3){
				res |= (1 << i);
				//cout << "total:" << total << "\n";
				//cout << "res:" << res << ' ' << "\n";
			}
		}
		return res;
	}
};
int main() {
	int i;
	while (cin >> i) {
		vector<int> nums;
		nums.push_back(i);
		while (cin >> i) {
			nums.push_back(i);
			if (getchar() == '\n')
				break;
		}
		//int res = Solution().singlenum(nums);
		int ret = Solution2().singlenum(nums);
		cout << ret << endl;
	}
	return 0;
}
