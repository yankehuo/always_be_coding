#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int xoroperation(int n, int start) {
		int res = 0;
		for (int i = 0; i < n; ++i) {
			res ^= (start + 2 * i);
		}
		return res;
	}
};

class Solution2 {
public:
	int xoroperation(int n, int start) {
		int s = start / 2, e = n & start & 1;
		int tmps = xsum(s - 1) ^ xsum(s + n - 1);
		return tmps << 1 | e;
	}

	int xsum(int x) {
		if (x % 4 == 0) return x;
		else if (x % 4 == 1) return 1;
		else if (x % 4 == 2) return x + 1;
		else return 0;
	}
};


int main() {
	return 0;
}
