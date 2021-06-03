#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int leastInterval(vector<int> &tasks, int n) {
		int len = tasks.size();
		int bucketcap = n + 1;
		vector<int> cnt(26);
		for (int task : tasks) {
			++cnt[task - 'A'];
		}
		//std::sort(cnt.begin(), cnt.end(), 
		//		[](const int &x, const int &y) { return x > y; });
		std::sort(cnt.begin(), cnt.end(), greater<int>());
		int lastx = 1;
		while (lastx < 26 && cnt[lastx] == cnt[0])
			++lastx;
		return max(len, bucketcap * (cnt[0] - 1) + lastx);
	}
};
int main()  {
	return 0;
}
