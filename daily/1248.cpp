#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numberOfSubarrays(vector<int> &nums, int k) {
		int len = nums.size();
		int cntarr[len + 1];
		memset(cntarr, 0, sizeof(cntarr));
		int cnt = 0, odd = 0;
		cntarr[0] = 1;
		for (int num : nums) {
			odd += num & 1;
			int tmp = odd - k;
			if (tmp >= 0)
				cnt += cntarr[tmp];
			++cntarr[odd];
		}
		return cnt;
	}
};
int main() {
	return 0;
}
