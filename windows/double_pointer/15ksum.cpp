#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int len = 0;
	vector<vector<int>> ksum(vector<int> &nums, int target) {
		std::sort(nums.begin(), nums.end());
		len = nums.size();
		cout << "len=" << len << "\n";
		return ksum(nums, target, 4, 0);

	}
	vector<vector<int>> ksum(vector<int> &nums, int target, int k, int index) {
		vector<vector<int>> res;
		if (index >= len)
			return res;
		if (k == 2) {
			cout << "here" << "\n";
			res = twosum(nums, target, index, len - 1);
			cout << "res.size()=" << res.size() << "\n";
		}
		else {
			for (int i = index; i + k - 1 < len; ++i) {
				vector<vector<int>> tmp = ksum(nums, target - nums[i], k - 1, i + 1);
				if (!tmp.empty()) {
					// for (vector<int> &set : tmp) {
						// res.push_back({nums[i]});
						// res.back().insert(res.back().end(), set.begin(), set.end());
					// }

					for (vector<int> &path : tmp) {
						path.push_back(nums[i]);
					}
					res.insert(res.begin(), tmp.begin(), tmp.end());

				}
				while (i + 1 < len && nums[i] == nums[i + 1])
					++i;
			}
		}
		return res;
	}
private:
	vector<vector<int>> twosum(vector<int> &nums, int target, int left, int right) {
		vector<vector<int>> tmpres;
		cout << "left, right=" << left << " " << right << "\n";
		while (left < right) {
			if (nums[left] + nums[right] < target) {
				cout << "here 2" << "\n";
				++left;
			}
			else if (nums[left] + nums[right] > target) {
				cout << "here 3" << "\n";
				--right;
			}
			else {
				cout << "here 4" << "\n";
				tmpres.push_back({nums[left], nums[right]});
				++left;
				--right;
				while (left < right && nums[left] == nums[left - 1])
					++left;
				while (left < right && nums[right] == nums[right + 1])
					--right;
			}
		}
		cout << "tmpres.size()=" << tmpres.size() << "\n";
		return tmpres;
	}

};
int main() {
	string line;
	int target;
	while (getline(cin, line)) {
		vector<int> nums;
		stringstream ss(line);
		string item;
		while (getline(ss, item, ' ')) {
			nums.push_back(stoi(item));
		}
		cin >> targt;
		vector<vector<int>> res = Solution().ksum(nums, target);
		cout << "[";
		for (vector<int> &tmp1 : res) {
			cout << "[";
			for (int tmp2 : tmp1) {
				cout << tmp2;
				if (tmp2 == *(tmp1.end() - 1))
					;
				else
					cout << ",";
			}
			if (tmp1 == *(res.end() - 1))
				cout << "]";
			else
				cout << "],";
		}
		cout << "]";
		cout << "\n";
	}
	return 0;
}

