#include <bits/stdc++.h>
using namespace std;
void judge(vector<int> &nums, int num) {
	int a = num / 100, b = num / 10 % 10, c = num % 10;
	++nums[a];
	++nums[b];
	++nums[c];

}
int main() {
	for (int i = 123; i <= 329; ++i) {
		vector<int> cnt(10, 0);
		int abc = i, def = 2 * i, ghi = 3 * i;
		judge(cnt, abc);
		judge(cnt, def);
		judge(cnt, ghi);
		int j = 0;
		for (j = 1; j <= 9; ++j) {
			if (cnt[j] != 1 || cnt[0] != 0)
				break;
		}
		if (j == 10)
			printf("%d %d %d\n", abc, def, ghi);
	}
	return 0;
}
