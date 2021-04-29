#include <cstdio>
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i != n; ++i) {
		for (int j1 = 0; j1 != i; ++j1)
			printf(" ");
		for (int j2 = i; j2 <= 2 * (n - 1) - i; ++j2)
			printf("#");
		printf("\n");
	}
	return 0;
}
