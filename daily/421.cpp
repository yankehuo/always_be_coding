#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findmaxxor(vector<int> &nums) {
		int mask = 0, res = 0, tmp = 0;
		for (int i = 31; i >= 0; --i) {
			unordered_set<int> seen;
			mask |= (1 << i);
			for (int num : nums) {
				seen.insert(num & mask);
			}
			tmp = res | (1 << i);
			for (int num : nums) {
				if (seen.count(tmp ^ (mask & num))) {
					res = res | (1 << i);
					break;
				}
			}
		}
		return res;
	}
};

int main() {
	return 0;
}
