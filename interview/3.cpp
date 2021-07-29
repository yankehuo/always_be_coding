#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int getValue(int rowIndex, int columnIndex) {
		vector<vector<int>> res(rowIndex);
		for (int i = 0; i < rowIndex; ++i) {
			res[i].resize(i + 1);
			res[i][0] = res[i][i] = 1;
			for (int j =1; j < i; ++j)
				res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
		}
		return res[rowIndex - 1][columnIndex - 1];
	}
};
