#include <bis/stdc++.h>
using namespace std;
class Solution {
public:
	int remove(vector<int> &nums) {
		if (nums.empty()) return 0;
		int index = 0;
		for (int i = 1; i != nums.size(); ++i) {
			if (nums[index] != nums[i]) {
				nums[++index] = nums[i];
			}
		}
		return ++index;
	}
};

int main() {
	return 0;
}
