#include <iostream>
#include <cstdio>
using namespace std;

#define maxn 1000005

int a[maxn];

int main() {
	int tot;
	scanf("%d", &tot);
	// cin >> tot;
	while (tot--) {
		int L, n;
		// cin >> L >> n;
		scanf("%d %d", &L, &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
			// cin >> a[i];
		int mint = 0;
		for (int i = 0; i < n; ++i)
			mint = max(mint, min(a[i], L - a[i]));
		int maxt = 0;
		for (int i = 0; i < n; ++i)
			maxt = max(maxt, max(a[i], L - a[i]));
		// cout << mint << " " << maxt << "\n";
		printf("%d %d\n", mint, maxt);
	}
	return 0;
}
