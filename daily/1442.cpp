#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int countTriplelets(vector<int> &arr) {
		// (k-i1) + (k-i2) + ...  ---> mk-(i1 + i2 + ...)
		int len = arr.size();
		int res = 0, s = 0;
		unordered_map<int, int> cnt, total;
		for (int k = 0; k < len; ++k) {
			int tmp = s ^ arr[k];
			if (cnt.count(tmp)) {
				res += cnt[tmp] * k - total[tmp];
			}
			++cnt[s];
			total[s] += k;
			s ^= arr[k];
		}
		return res;
	}
};

int main() {
	return 0;
}
