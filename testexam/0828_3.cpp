#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

int n, m;
int a[N][N];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	int q;
	cin >> q;
	while (q-- > 0) {
		int ask;
		cin >> ask;
		query(ask);
	}


	return 0;
}
