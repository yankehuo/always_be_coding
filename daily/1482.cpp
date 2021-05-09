#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int mindays(vector<int> &bloomDay, int m, int k) {
		if (m > bloomDay.size() / k) return -1;
		int left = 1, right = *max_element(bloomDay.begin(), bloomDay.end());
		while (left < right) {
			int mid = left + (right - left) / 2;
			if (check(bloomDay, mid, m, k))
				right = mid;
			else
				left = mid + 1;
		}
		return left;
	}

	bool check(vector<int> &bloomDay, int limit, int m, int k) {
		int concnt = 0, cnt = 0;
		for (int day : bloomDay) {
			if (day <= limit) {
				++concnt;
				if (concnt == k) {
					++cnt;
					concnt = 0;
				}
			}
			else
				concnt = 0;
		}
		return cnt >= m;
	}
};
int main() {
	return 0;
}
