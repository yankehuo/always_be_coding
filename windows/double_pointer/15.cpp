#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<vector<int>> threesum(vector<int> &nums) {
		vector<vector<int>> res;
		vector<int> path;
		int len = nums.size();
		for (int i = 0; i < len; ++i) {
			if (findtarget(-nums[i])) {
				path.push_back(i);
			}
		}
	}
private:
	pair<int, int> findtarget(int target, int start, int end) {
		int left = start, right = end;
		while (left < right) {

		}
	}

};
int main() {
	return 0;
}
