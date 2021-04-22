#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxsumk(vector<vector<int>> &matrix, int k) {
		const int rows= matrix.size(), cols = matrix[0].size();
		int res = std::numeric_limits<int>::min();
		// list cols
		// paramter note!!!
		for (int left = 0; left != cols; ++left) {
			// extend and store the rectangle
			vector<int> sum(rows, 0);
			for (int j = left; j != cols; ++j) {
				for (int i = 0; i != rows; ++i) {
					sum[i] += matrix[i][j]; 
				}
				set<int> sumlist;
				sumlist.insert(0);
				int cursum = 0, curmax = std::numeric_limits<int>::min();
				for (const auto& num : sum) {
					cursum += num;
					auto it = sumlist.lower_bound(cursum - k);
					if (it != sumlist.end()) {
						curmax = std::max(curmax, cursum - *it);
					}
					sumlist.insert(cursum);
				}
				res = std::max(res, curmax);
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
