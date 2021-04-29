#include <cstdio>
int main() {
	int a, b, c;
	int cnt = 0;
	while (scanf("%d%d%d", &a, &b, &c) == 3 && a && b && c) {
		++cnt;
		double res = (double)a / b;
		printf("Case %d:%.*lf\n", cnt, c, res);
	}
	return 0;
}
