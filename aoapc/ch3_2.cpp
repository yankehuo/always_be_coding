#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
	const int maxn = 101;
	char s[maxn];
	scanf("%s", s);
	unordered_map<char, double> mp = {{'C', 12.01}, {'N', 14.01}, {'O', 16.00}, {'H', 1.008}};
	int len = strlen(s);
	double res = 0.0;
	for (int i = 0; i < len; ) {
		if (isalpha(s[i]) && i + 1 < len && isdigit(s[i + 1])) {
			res += (mp[s[i]] * (s[i + 1] - '0'));
			i = i + 2;
		}
		else {
			res += mp[s[i]];
			++i;
		}
	}
	printf("%.3fg/mol\n", res);
	return 0;
}
