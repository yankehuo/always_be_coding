#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> decoded(vector<int> &nums, int first) {
		vector<int> res;
		res.push_back(first);
		for (int num : nums) {
			int val = res.back() ^ num;
			res.push_back(val);
		}
		return res;
	}
};
int main() {

	return 0;
}
