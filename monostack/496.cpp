#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> nextGreat(vcector<int> &nums1, vector<int> &nums2) {
		// nums1-->query, nums2-->store
		vector<int> stk;
		unordered_map<int, int> kv;
		vector<int> res;
		int i = 0, len = nums2.size();
		while (i < len) {
			if (stk.empty() || (i < len && nums2[stk.back()] >= nums2[i])) {
				stk.push_back(i++);
			}
			else {
				kv.insert({nums2[stk.back()], nums2[i]});
				stk.pop_back();
			}
		}
		for (int i = 0; i < nums1.size(); ++i) {
			if (kv.find(nums1[i]) != kv.end()) {
				res[i] = kv[nums1[i]];
			}
			else {
				res[i] = -1;
			}
		}
		return res;
	}
};
int main() {
	return 0;
}
