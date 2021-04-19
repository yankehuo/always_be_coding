#include <bits/stdc++.h>
class Solution {
public:
	int remove(vector<int> &nums) {
		int index = 0;
		for (int i = 0; i != nums.size(); ++i) {
			if (nums[i] != val) {
				nums[index] = nums[i];
				++index;
			}
		}
		return index;
	}
};
int main() {

}
