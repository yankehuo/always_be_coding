#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	struct comp {
		bool opreator() (int x, int y){
			return x > y;
		}
	};
	// exist problem
	// modified s1
	using PA = pair<int, int>;
	vector<int> maxWindow(vector<int> &nums, int k) {
		priority_queue<PA> pq;
		int len = nums.size();
		vector<int> res;
		int left = 0;
		for (int right = 0; right < len; ++right) {
			while (right - left < k) {
				pq.push({nums[right], right});
				++right;
			}
			--right;
			while (pq.top().second < left)
				pq.pop();
			res.push_back(pq.top().first);
			++left;
		}
		return res;
	}

	// s2: monoqueue
	vector<int> maxWindow(vector<int> &num, int k) {
		deque<int> dq;
		int len = nums.size();
		vector<int> res;
		int left = 0;
		for (int right = 0; right < len; ++right) {
			while (right - left < k) {
				if (dq.empty() || (right - left < k && dq.back() >= nums[right])) {
					dq.push_back(nums[right]);
					++right;
				}
				else {
					dq.pop_back();
				}
			}
			--right;
			res.push_back(dq.front());
			if (dq.front() == nums[left]) {
				dq.pop_front();
			}
			++left;
		}
		return res;
	}
	// s3: block or cut bucket
};

int main() {
	return 0;
}
