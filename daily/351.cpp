#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numberofPatterns(int m, int n) {
		vector<vector<int>> skip(10, vector<int>(10));
		skip[1][3] = skip[3][1] = 2;
		skip[1][7] = skip[7][1] = 4;
		skip[1][9] = skip[3][7] = skip[4][6] = skip[2][8] = 5;
		skip[9][1] = skip[7][3] = skip[6][4] = skip[8][2] = 5;
		skip[3][9] = skip[9][3] = 6;
		skip[7][9] = skip[9][7] = 8;
		int res = 0;
		vector<bool> visited(10, false);
		for (int i = m; i <= n; ++i) {
			res += dfs(1, visited, skip, i - 1) * 4;
			res += dfs(2, visited, skip, i - 1) * 4;
			res += dfs(5, visited, skip, i - 1);
		}
		return res;
	}
private:
	int dfs(int idx, vector<bool> &visited, vector<vector<int>> &skip, int num) {
		if (num == 0)
			return 1;
		int res = 0;

		visited[idx] = true;
		for (int i = 1; i <= 9; ++i) {
			int cross = skip[idx][i];
			if (!visited[i] && (cross == 0 || visited[cross]))
				res += dfs(i, visited, skip, num - 1);
		}
		visited[idx] = false;

		return res;
	}
};

int main() {
	return 0;
}
