#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool xorGame(vector<int> &nums) {
		if (nums.size() % 2 == 0)
			return true;
		if (!accumulate(nums.begin(), nums.end(), 0, bit_xor<int>()))
			return true;
		return false;
	}
};
int main() {
	return 0;
}
