#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int hammingDistance(int x, int y) {
		// remove the most right
		int s = x ^ y;
		int cnt = 0;
		while (s) {
			s = s & s-1;
			++cnt;
		}
		return cnt;
	}
};
int main() {
	return 0;
}
