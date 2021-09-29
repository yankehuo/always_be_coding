#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1024;
int t[MAXN];
int lowbit(int x) {
	return x & -x;
}
// sum of arr of 1...x
int sum(int x) {
	int res = 0;
	for (int i = x; i > 0; i -= lowbit(i))
		res += t[i];
	return res;
}
void add(int x, int u) {
	for (int i = x; i <= MAXN; i += lowbit(i))
		t[i] += u;
}




// simple
int lowbit(int x) {
	return x & -x;
}
int query(int x) {
	int res = 0;
	for (; x; x -= lowbit(x))
		res += t[x];
	return res;

}
void add(int x, int diff) {
	for (; x <= MAXN; x += lowbit(x))
		t[x] += diff;
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
