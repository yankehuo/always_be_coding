#include <cstdio>
#include <cstring>

int main() {
	const char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int c, i;
	while ((c = getchar()) != EOF) {
		// find index
		for (i = 1; s[i] && s[i] != c; ++i)
			;
		if (s[i])
			putchar(s[i - 1]);
		else
			putchar(c);
	}
	return 0;
}
