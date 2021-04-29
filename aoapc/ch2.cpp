#include <stdio.h>
#include <time.h>
int main() {
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	const int MOD = 1000000;
	int n = 0;
	while (scanf("%d", &n) == 1) {
		int S = 0;
		if (n > 25)
			n = 25;
		for (int i = 1; i <= n; ++i) {
			int factorial = 1;
			for (int j = 1; j <= i; ++j) 
				factorial = (factorial * j % MOD);
		// printf("debug, factorial: %d\n", factorial);
			S = (S + factorial) % MOD;
		}
		printf("%d\n", S);
		printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
	}
	return 0;
}
