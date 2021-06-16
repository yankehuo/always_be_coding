#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main() {
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int> nums(n);
	int a;
	for (int i = 0; i < n; ++i)
		cin >> nums[i];
	sort(nums.begin(), nums.end(), greater<int>());
	bool found = false;
	for (int i = 0; i < n - 2; ++i) {
		if (nums[i] < nums[i + 1] + nums[i + 2]) {
	 		cout << nums[i] + nums[i + 1] + nums[i + 2] << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << 0 << endl;
	}

	return 0;
}
