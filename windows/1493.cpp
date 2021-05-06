#include <bits/stdc++.h>
using namespace std;
int longsub(vector<int> &nums) {
	int cntzero = 0, allzero = 0;
	int maxlen = 0;
	int left = 0;
	for (int right = 0; right < nums.size(); ++right) {
		if (nums[right] == 0)
			++cntzero;
		if (nums[right] == 0) 
			++allzero;
		while (cntzero > 1) {
			if (nums[left] == 0) {
				--cntzero;
			}
			++left;
		}
		maxlen = std::max(maxlen, right - left);
	}
	return allzero == nums.size() ? 0 : maxlen; 
}

int main() {
	string line;
	while (getline(cin, line)) {
		vector<int> nums;
		stringstream ss(line);
		string item;
		while (getline(ss, item, ',')) {
			nums.push_back(stoi(item));
		}
		int res = longsub(nums);
		cout << res << "\n";
	}
	return 0;
}
