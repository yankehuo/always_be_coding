#include <cstdio>
#include <cstring>
const int maxn = 1001;
int f1() {
	int a[maxn];
	int x, n = 0;
	while (scanf("%d", &x) == 1) {
		a[n++] = x;
	}
	for (int i = n - 1; i > 0; --i) {
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);
	return 0;
}
int f2() {
	int n, k;
	int arr[maxn];
	int flag = 1;
	memset(arr, 0, sizeof(int) * maxn);
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (j % i == 0)
				arr[j] = !arr[j];
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (arr[i] == 1) {
			if (flag) {
				printf("%d", i);
				flag = 0;
			}
			else {
				printf(" %d", i);
			}
		}
	}
	printf("\n");
	return 0;
}

int f3() {
	int arr[maxn][maxn];
	memset(arr, 0, sizeof(arr));
	int tot = 0;
	int n;
	scanf("%d", &n);
	int i = 0, j = n - 1;
	arr[i][j] = ++tot;
	while (tot < n * n) {
		while (i + 1 < n && !arr[i + 1][j])
			arr[++i][j] = ++tot;
		while (j - 1 >= 0 && !arr[i][j - 1])
			arr[i][--j] = ++tot;
		while (i - 1 >= 0 && !arr[i - 1][j])
			arr[--i][j] = ++tot;
		while (j + 1 < n && !arr[i][j + 1])
			arr[i][++j] = ++tot;
	}
	for (int i = 0; i != n; ++i) {
		for (int j = 0; j != n; ++j) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int f4() {
	const int maxm = 10;
	int n;
	int arr[maxm][maxm];
	memset(arr, 0, sizeof(arr));
	int tot = 0;
	scanf("%d", &n);
	int up = 0, down = n - 1, left = 0, right = n - 1;
	while (1) {
		for (int i = up; i <= down; ++i)
			arr[i][right] = ++tot;
		if (--right < left)
			break;
		for (int j = right; j >= left; --j)
			arr[down][j] = ++tot;
		if (--down < up)
			break;
		for (int i = down; i >= up; --i)
			arr[i][left] = ++tot;
		if (++left > right)
			break;
		for (int j = left; j <= right; ++j)
			arr[up][j] = ++tot;
		if (++up > down)
			break;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main() {
	int count = 0;
	char s[20], buf[99];
	scanf("%s", s);
	for (int i = 111; i <= 999; ++i) {
		for (int j = 11; j <= 99; ++j) {
			int x = i * (j % 10), y = i * (j / 10), z = i * j;
			int flag = 1;
			sprintf(buf, "%d%d%d%d%d", i, j, x, y, z);
			for (int i = 0; i < strlen(buf); ++i)
				if (strchr(s, buf[i]) == NULL)
					flag = 0;
			if (flag) {
				printf("<%d>\n", ++count);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", i, j, x, y, z);
			}
		}
	}
	printf("The number of solutions = %d\n", count);
	// strchr
//	printf("%d %d %d\n", count++, count++, count++);
	return 0;
}
