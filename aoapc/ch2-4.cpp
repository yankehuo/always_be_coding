#include <cstdio>
int main() {
	long long int n, m;
#ifdef LOCAL
	printf("int %d bytes\n", sizeof(int));
	printf("long %d bytes\n", sizeof(long int));
	printf("long long %d bytes\n", sizeof(long long int));
	printf("float %d bytes\n", sizeof(float));
	printf("double %d bytes\n", sizeof(double));
	printf("long double %d bytes\n", sizeof(long double));
#endif
	int cnt = 0;
	while ((scanf("%d%d", &n, &m) == 2) && n && m) {
		++cnt;
		double sum = 0.0;
		for (long int i = n; i <= m; ++i) {
			//printf("%.5lf\n", sum);
			sum += 1.0 / (double )i / i;
		}
		printf("Case %d:%.5lf\n", cnt, sum);
	}
	return 0;
}
