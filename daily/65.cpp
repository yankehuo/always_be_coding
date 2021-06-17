#include <bits/stdc++.h>
using namespace std;

bool isNumber (string s) {
	int digits = 0, dots = 0;
	int n = s.size(), i = 0;
	for (; i < n && isspace(s[i]); ++i)
		;
	if (s[i] == '+' || s[i] == '-')
		++i;
	for (; i < n && isdigit(s[i]) || s[i] == '.'; ++i) {
		isdigit(s[i]) ? ++digits : ++dots;
	}
	if (!digits || dots > 1)
		return false;
	if (s[i] == 'e' || s[i] == 'E') {
		++i;
		if (s[i] == '+' || s[i] == '-')
			++i;
		digits = 0;
		for (; i < n && isdigit(s[i]); ++i)
			++digits;
		if (!digits)
			return false;
	}
	for (; i < n && isspace(s[i]); ++i)
		;
	return i == n;

}

int main() {
	return 0;
}
