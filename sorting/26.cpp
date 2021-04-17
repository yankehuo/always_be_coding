#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int removeduplicates(vector<int> &nums) {
		int p2 = 0;
		int p1 = 1;
		for (; p1 != nums.size(); ) {
			if (nums[p1] == nums[p1 -1]) {
				++p1;
			}
			else {
				++p2;
				nums[p2] = nums[p1];
				++p1;
			}
		}
		return p2;
	}

};
int main() {
	return 0;
}
