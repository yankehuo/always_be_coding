#include <bits/stdc++.h>
using namespace std;
// windows -- binary search
class Solution {
public:
	bool contain(vector<int> &nums, int k, int t) {
		std::set<int> st;
		int n = nums.size();
		for (int i = 0; i != n; ++i) {
			auto it = st.lower_bound(nums[i] - t);
			if (it != st.end() && *it <= nums[i] + t)
				return true;
			st.insert(nums[i]);
			// already process 0...k
			if (i >= k) {
				st.erase(nums[i - k]);
			}
		}
		return false;
	}
};
// windows -- bucket
class Solution {
public:
	bool contain(vector<int> &nums, int k, int t) {
		unordered_map<int, int> bucket;
		int n = nums.size();
		for (int i = 0; i != n; ++i) {
			int id = getid(nums[i], t + 1ll);
			long x = nums[i];
			if (bucket.count(id))
				return true;
			if (bucket.count(id - 1) && abs(bucket[id - 1] - x) <= t)
				return true;
			if (bucket.count(id + 1) && abs(bucket[id + 1] - x) <= t)
				return true;
			bucket[id] = nums[i];
			if (i >= k) {
				bucket.erase(getid(nums[i - k], t + 1ll));
			}
		}
		return false;
	}
private:
	int getid(int x, long len) {
		return x < 0 ? (x + 1ll) / len - 1 : x / len;
	}
};

int main() {
	return 0;
}
