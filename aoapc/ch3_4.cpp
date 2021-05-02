#include <cstdio>
#include <cstring>
int main() {
	const int maxn = 81;
	char s[maxn];
	scanf("%s", s);
	int len = strlen(s);
	int resk = 0;
	for (int k = 1; k <= len; ++k) {
		int i = 0;
		for (; i + k < len; ++i) {
			if (s[i] != s[i + k])
				break;
		}
		if (i == len - k && resk == 0) {
			resk = k;
			break;
		}
	}
	printf("%d\n", resk);
	return 0;
}
