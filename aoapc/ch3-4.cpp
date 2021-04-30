#include <cstdio>

int main() {
#ifdef LOCAL
	freopen("3-4.in", "r", stdin);
	freopen("3-4.out", "w", stdout);
#endif
	int n;
	int cnt = 0;
	while (scanf("%d", &n) == 1 && n) {
		int a[n], b[n];
		++cnt;
		printf("Game %d:\n", cnt);
		for (int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		while (true) {
			int A = 0, B = 0;
			for (int i = 0; i < n; ++i) {
				scanf("%d", &b[i]);
				if (a[i] == b[i])
					++A;
			}
			if (b[0] == 0)
				break;
			for (int d = 1; d <= 9; ++d) {
				int p1 = 0, p2 = 0;
				for (int k = 0; k < n; ++k) {
					if (a[k] == d) ++p1;
					if (b[k] == d) ++p2;
				}
				if (p1 < p2) B += p1;
				else B += p2;
			}
			printf("    (%d,%d)\n", A, B - A);
		}
	}
	return 0;
}
