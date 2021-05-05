#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 101;
char s1[maxn], s2[maxn];
int main() {
	while (scanf("%s%s", s1, s2) == 2) {
		int cnt1[26] = {0}, cnt2[26] = {0};
		int n = strlen(s1);
		for (char ch : s1)
			++cnt1[ch - 'A'];
		for (char ch : s2)
			++cnt2[ch - 'A'];
		sort(cnt1, cnt1 + 26);
		sort(cnt2, cnt2 + 26);
		int flag = 1;
		for (int i = 0; i < 26; ++i) {
			if (cnt1[i] != cnt2[i]) {
				printf("NO\n");
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf("YES\n");
		}
	}
	
	return 0;
}
