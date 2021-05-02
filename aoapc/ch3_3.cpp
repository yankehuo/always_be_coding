#include <cstdio>
#include <cstring>
int main() {
	const int maxn = 10;
	int arr[maxn];
	memset(arr, 0, sizeof(arr));
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			break;
		for (int i = 0; i <= 9; ++i) {
			if (c - '0' == i) {
				++arr[i];
			}
		}
	}
	for (int num : arr) {
		putchar(num + '0');
		// putchar(num);
	}
	putchar('\n');
	return 0;
}
