#include <bits/stdc++.h>
using namespace std;

string smallestGoodBase(string n) {
	// m + 1 bits --> m, [1, log(k)n)
	// k = floor-->n(1/m)    k < n(1/m) < k + 1
	long nval = stol(n);
	int maxm = floor(log(nval) / log(2));
	// bool flag = false;
	// string res;
	for (int m = maxm; m > 1; --m) {
		long sum = 1, mul = 1;
		int k = pow(nval, 1.0 / m);
		for (int j = 1; j <= m; ++j) {
			mul *= k;
			sum += mul;
		}
		if (sum == nval) {
			return to_string(k);
			// flag = true;
			// break;
		}
	}
	return to_string(nval - 1);
	
}

int main() {
	return 0;
}
