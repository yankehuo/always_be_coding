#include <bits/stdc++.h>
using namespace std;
// presum    xorsum(a - 1) ^ xorsum(b) ---> a ^ (a + 1) ... ^ b

vector<int>  xorquery(vector<int> &arr, vector<vector<int>> &queries) {
	int len = arr.size();
	vector<int> xorsum(len, 0);
	xorsum[0] = arr[0];
	for (int i = 1; i <= len - 1; ++i) {
		xorsum[i] = xorsum[i - 1] ^ arr[i];
	}
	vector<int> res;
	for (int i = 0; i < queries.size(); ++i) {
		int m = queries[i][0], n = queries[i][1];
		if (m == 0)
			res.push_back(xorsum[n]);
		else
			res.push_back(xorsum[m - 1] ^ xorsum[n]);
	}
	return res;
}
int main() {
	return 0;
}
