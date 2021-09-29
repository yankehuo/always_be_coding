#include <bits/stdc++.h>
using namespace std;
int n;
const int kMOD = 998244353;

int main() {
	cin >> n;
	if (n == 1) return 2;
	if (n == 2) return 4;
	vector<int> f(n + 1, 0);
	f[1] = 2, f[2] = 4;
	for (int i = 3; i <= n; ++i) {
		f[i] = (f[i - 1] + f[i - 2])% kMOD;
	}
	cout << f[n] << endl;


	return 0;
}
