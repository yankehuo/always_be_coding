#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<bool> canEat(vector<int> &candiesCount, vector<vector<int>> &queries) {
		vector<bool> res;
		int n = candiesCount.size();
		vector<long> presum(n + 1, 0);
		for (int i = 1; i <= n; ++i)
			presum[i] = presum[i - 1] + candiesCount[i - 1];
		for (vector<int> &query : queries) {
			long minday = presum[query[0]] / query[2];
			long maxday = presum[query[0] + 1] - 1;
			bool tmp = minday <= query[1] && query[1] <= maxday;
			res.push_back(tmp);
		}
		return res;
	}
};
int main() {
	return 0;
}
