#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	void rotate(vector<vector<int>> &matrix) {
		// matrix_new[col][n - row - 1] = matrix[row][col]
		int n = matrix.size();
		for (int i = 0; i < n / 2; ++i) {
			for (int j = 0; j < (n + 1) / 2; ++j) {
				int tmp = matrix[i][j];
				matrix[i][j] = matrix[n - j - 1][i];
				matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
				matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
				matrix[j][n - i - 1] = tmp;
			}
		}
	}	


	void rotate(vector<vector<int>> &matrix) {
		int n = matrix.size();
		for (int i = 0; i < n / 2; ++i) {
			for (int j = 0; j < n; ++j) {
				swap(matrix[i][j], matrix[n - i - 1][j]);
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}
	}
};
int main() {
	return 0;
}
