#include <cstdio>
#include <cstring>
bool less(const char *s, int i, int idx) {
	int n = strlen(s);
	for (int j = 0; j < n; ++j) {
		if (s[(i + j) % n] != s[(idx + j) % n]) {
			return s[(i + j) % n] < s[(idx + j) % n];
		}
	}
	return 0;
}
int main() {
	const int maxn = 101;
	char s[maxn];
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		int idx = 0;
		int len = strlen(s);
		for (int i = 1; i < len; ++i) {
			if (less(s, i, idx)) {
				idx = i;
			}
		}
		for (int i = 0; i < len; ++i) {
			putchar(s[(idx + i) % len]);
		}
		putchar('\n');
	}
	
	return 0;
}
