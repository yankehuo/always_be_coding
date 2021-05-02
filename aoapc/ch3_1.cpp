#include <cstdio>
#include <cstring>
int main() {
	const int maxn = 81;
	char s[maxn];
	scanf("%s", s);
	int flag = 0, res = 0;
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		if (s[i] == 'O') {
			++flag;
			res += flag;
		}
		else {
			flag = 0;
		}
	}
	printf("%d\n", res);
	return 0;
}
