#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1024;
int t[MAXN];
int lowbit(int x) {
	return x & -x;
}
int sum(int x) {
	int res = 0;
	for (int i = x; i > 0; i -= lowbit(i))
		res += t[i];
	return res;
}
void add(int x, int u) {
	for (int i = x; i <= MAXN; i += lowbit(i))
		t[x] += u;
}

int nums[MAXM];
void update(int index, int val) {
	add(index + 1, val - nums[index]);
	nums[index] = val;
}
int sumrange(int left, int right) {
	return sum(right + 1) - sum(left);
}
int main() {
	return 0;
}
