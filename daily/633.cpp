#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool judgeSquareSum(int c) {
		vector<int> square;
		square.push_back(0);
		int right = 0;
		for (int i = 1; i < INT_MAX / i; ++i) {
			square.push_back(i * i);
			if (square[i] <= c) {
				right = i;
			}
		}
		for (int i = 0; i <= right; ++i) {
			auto it = std::lower_bound(square.begin(), square.begin() + right + 1, c - square[i]);
			if (*it == c - square[i])
				return true;
		}
		return false;
	}
};

class Solution2 {
public:
	bool judgeSquareSum(int c) {
		long left = 0, right = sqrt(c);
		while (left <= right) {
			long sum = left * left + right * right;
			if (sum < c)
				++left;
			else if (sum > c)
				--right;
			else
				return true;
		}
		return false;
	}
};

int main() {
	return 0;
}
