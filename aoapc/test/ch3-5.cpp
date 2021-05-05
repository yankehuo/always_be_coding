#include <cstdio>
#include <cstring>
int main() {
	const int maxn = 1000001;
	int arr[maxn];
	// initialize
	memset(arr, 0, sizeof(arr));
	for (int m = 1; m < maxn; ++m) {
		int x = m, y = m;
		while (x > 0) {
			y += x % 10;
			x /= 10;
		}
		if (y > 10000)
			continue;
		if (arr[y] == 0 || arr[y] > m)
			arr[y] = m;
	}
	int n;
	while (scanf("%d", &n) == 1 && n) {
		printf("%d\n", arr[n]);
	}
	return 0;
}
