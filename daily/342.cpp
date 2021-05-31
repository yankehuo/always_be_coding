#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isPowerOfFour(int n) {
		// >0 2 4
		return n > 0 && (n & n-1) == 0 && n % 3 == 1;
		// return n > 0 && (n & n-1) == 0 && (n & 0xaaaaaaaa) == 0;
	}
};
int main() {
	return 0;
}
