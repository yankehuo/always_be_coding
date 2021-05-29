#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int subarraySum(vector<int> &nums, int k) {
		int pre = 0, cnt = 0;
		unordered_map<int, int> kv;
		kv[0] = 1;
		for (int num : nums) {
			pre += num;
			if (kv.find(pre - k) != kv.end()) {
				cnt += kv[pre - k];
			}
			++kv[pre];
		}
		return cnt;
	}
};
class Solution1074 {
public:
	int numSubmatrix(vector<vector<int>> &matrix, int target) {
		int m = matrix.size(), n = matrix[0].size();
		int cnt = 0;
		for (int i = 0; i < m; ++i) {
			vector<int> sum(n);
			for (int j = i; j < m; ++j) {
				for (int k = 0; k < n; ++k) {
					sum[k] += matrix[j][k];
				}
				cnt += subarraySum(sum, target);
			}
		}
		return cnt;
	}
};
int main() {
	return 0;
}
