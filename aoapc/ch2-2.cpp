#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
#ifdef LOCAL
	freopen("2-2.in", "r", stdin);
	freopen("2-2.out", "w", stdout);
#endif
	int a, b, c;
	int cnt = 0;
	while (cin >> a >> b >> c) {
		++cnt;
		int flag = false;
		for (int i = 40; i <= 100; ++i) {
			if (i % 3 != a)
				continue;
			if (i % 5 != b)
				continue;
			if (i % 7 != c)
				continue;
			flag = true;
			cout << "Case " << cnt << ":" << i << "\n";
		}
		if (!flag)
			cout << "Case " << cnt << ":No answer" << endl;
	}
	return 0;
}
