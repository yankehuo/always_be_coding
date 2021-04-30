#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

const char *rlist = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char *msg[] = {" -- is not a palindrome.", " -- is a regular palindrome.", " -- is a mirrored string.", " -- is a mirrored palindrome."};
char rev(char ch) {
	if (isalpha(ch))
		return rlist[ch - 'A'];
	if (isdigit(ch))
		return rlist[ch - '0' + 25];
}
int main() {
#ifdef LOCAL
	freopen("3-3.in", "r", stdin);
	freopen("3-3.out", "w", stdout);
#endif
	char s[30];
	// string s;
	while (scanf("%s", s) == 1) {
		int len = strlen(s);
		// int len = s.size();
		// find msg
		int p = 1, m =  1;
		for (int i = 0; i < len; ++i) {
			if (s[i] != s[len - 1 - i])
				p = 0;
			if (rev(s[i]) != s[len - 1 - i])
				m = 0;
		}
		const char *res = msg[2 * m + p];
		printf("%s%s\n\n", s, res);
	}
	return 0;
}
