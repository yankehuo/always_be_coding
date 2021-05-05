#include <cstdio>
#include <cstring>
const int maxn = 100;
char s1[maxn];
char s2[maxn];
int win = 1, lose = 1, left = 0, chance = 0;
void guess(char ch) {
	int len = strlen(s1);
	int bad = 1;
	for (int i = 0; i < len; ++i) {
		if (ch == s1[i]) {
			--left;
			s1[i] = ' ';
			bad = 0;
		}
	}
	if (bad)
		--chance;
	if (!chance)
		lose = 1;
	if (!left)
		win = 1;
}

int main() {
	int n = 0;
	while (scanf("%d%s%s", &n, s1, s2) == 3 && n != -1) {
		printf("Round %d\n", n);
		int len = strlen(s2);
		win = lose = 0;
		left = strlen(s1);
		chance = 7;
		for (int i = 0; i < len; ++i) {
			guess(s2[i]);
			if (win || lose)
				break;
		}
		if (win)
			printf("You win.\n");
		else if (lose)
			printf("You lose.\n");
		else {
			printf("You chickened out.\n");
		}
	}
	return 0;
}
