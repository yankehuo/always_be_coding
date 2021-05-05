#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int reverseint(int x) {
		long long res = 0;
		int sign = 0;
		if (x == INT_MIN || x == 0) return res;
		if (x < 0 && x != INT_MIN) {
			sign = 1;
			x = -x;
		}
		while (x > 0) {
			res = res * 10 + x % 10;
			x /= 10;
		}
		if (res <= INT_MIN || res > INT_MAX)
			return 0;
		return !sign ? res : -res;
	}
};
int main() {
	return 0;
}
