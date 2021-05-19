#include <bits/stdc++.h> using namespace std;
class Solution {
public:
	int kthLargestValue(vector<vector<int>> &matirx, int k) {
		int rows = matrix.size(), n = matrix[0].size();
		vector<vector<int>> presum(rows + 1, vector<int>(cols + 1, 0));
		vector<int> res;
		for (int i = 1; i <= rows; ++i) {
			for (int j = 1; j <= cols; ++j) {
				presum[i][j] = presum[i - 1][j] ^ presum[i][j - 1] ^ presum[i - 1][j - 1] ^ matrix[i - 1][j - 1];
				res.push_back(presum[i][j]);
			}
		}
		// sort
		std::sort(res.begin(), res.end(), greater<int>);
		// nth_element quick selection
		// nth_element(res.begin(), res.begin() + k - 1, res.end(), greater<int>());
		return res[k - 1];
	}
};
// presum + find Kth
int main() {
	return;
}
