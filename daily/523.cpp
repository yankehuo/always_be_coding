#include <bits/stdc++.h>
using namespace std;
// time limit exceed
class Solution {
public:
	bool checkSub(vector<int> &nums, int k) {
		int len = nums.size();
		int presum[len + 1];
		memset(presum, 0, sizeof(presum));
		for (int i = 1; i <= len; ++i)
			presum[i] = presum[i - 1] + nums[i - 1];
		for (int i = 0; i <= len; ++i) {
			for (int j = i + 2; j <= len; ++j) {
				if ((presum[j] - presum[i]) % k == 0)
					return true;
			}
		}
		return false;
	}
};

// not right
class Solution2 {
public:
	bool checkSub(vector<int> &nums, int k) {
		int len = nums.size();
		int presum[len + 1];
		memset(presum, 0, sizeof(presum));
		for (int i = 1; i <= len; ++i)
			presum[i] = presum[i - 1] % k + nums[i - 1] % k;
		// % k --> not find in binary
		for (int j = 2; j <= len; ++j) {
			auto it = std::lower_bound(presum.begin(), presum.end(), presum[j]);
			if (it != presum.end() && (presum.begin() + j - it) >= 2)
				return true;
		}
		return false;
	}
};

// i---j
// prej - prei-1 = n*k
// prei-1 = prej - n*k
class Solution3 {
public:
	bool checkSub(vector<int> &nums, int k) {
		int len = nums.size();
		int pre = 0;
		unordered_map<int, vector<int>> kv;
		kv.insert({0, {-1}});
		for (int i = 0; i < len; ++i) {
			pre = (pre + nums[i]) % k;
			kv[pre].push_back(i);
			if (kv[pre].size() >= 2 && kv[pre].back() - kv[pre].front() >= 2)
				return true;
		}
		return false;
	}
};


//
class Solution {
public:
	bool  checkSub(vector<int> &nums, int k) {
		int len = nums.size();
		int pre = 0;
		unordered_map<int, int> kv;
		kv[0] = -1;
		for (int i = 0; i < len; ++i) {
			pre = (pre + nums[i]) % k;
			if (kv.count(pre)) {
				int preidx = kv[pre];
				if (i - preidx >= 2)
					return true;
			}
			else {
				kv[pre] = i;
			}
		}
		return false;
	}
};

int main() {
	return 0;
}
