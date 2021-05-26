#include <bits/stdc++.h>
using namespace std;
const int kMAXN = 1024;
int n, t[4 * kMAXN];

// range sum 
// build(arr, 1, 0, n - 1);
void build(int a[], int v, int tl, int tr) {
	if (tl == tr) {
		t[v] = a[tl];
	}
	else {
		int tm = tl + (tr - tl) / 2;
		build(a, 2 * v, tl, tm);
		build(a, 2 * v + 1, tm + 1, tr);
		t[v] = t[2 * v] + t[2 * v + 1];
	}
}

int sum(int v, int tl, int tr, int l, int r) {
	if (l > r) {
		return 0;
	}
	if (tl == l && r == tr) {
		return t[v];
	}
	int tm = tl + (tr - tl) / 2;
	return sum(2 * v, tl, tm, l, min(r, tm)) + sum(2 * v + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
	if (tl == tr) {
		t[pos] = new_val;
	}
	else {
		int tm = tl + (tr - tl) / 2;
		if (pos <= tm) {
			update(2 * v, tl, tm, pos, new_val);
		}
		else {
			update(2 * v + 1, tm + 1, tr, pos, new_val);
		}
		t[v] = t[2 * v] + t[2 * v + 1];
	}
}

// range maximum 
// first--maximum  second--frequency
pair<int, int> t[4 * kMAXN];
pair<int, int> combine(pair<int, int> a, pair<int, int> b) {
	if (a.first > b.first)
		return a;
	if (b.first > a.first)
		return b;
	return make_pair(a.first, a.second + b.second);
}

void build(int a[], int v, int tl, int tr) {
	if (tl == tr) {
		t[v] = make_pair(a[tl], 1);
	}
	else {
		int tm = tl + (tr - tr) / 2;
		build(a, v * 2, tl, tl);
		build(a, v * 2 + 1, tm + 1, tr);
		t[v] = combine(t[v * 2], t[v * 2 + 1]);
	}
}

pair<int, int> get_max(int v, int tl, int tr, int l, int r) {
	if (l > r)
		return make_pair(-INF, 0);
	if (l == tl && r == tr)
		return t[v];
	int tm = tl + (tr - tl) / 2;
	return combine(get_max(v * 2, tl, tm, l, min(r, tm)), get_max(v * 2 + 1, tm, tr, max(l, tm + 1), r));
}

void update(int v, int tl, int tr, int pos, int new_val) {
	if (tl == tr) {
		t[v] = make_pair(new_val, 1);
	}
	else {
		int tm = tl + (tr - tl) / 2;
		if (pos <= tm) {
			update(v * 2, tl, tm, pos, new_val);
		}
		else {
			update(v * 2 + 1, tm, tr, pos, new_val);
		}
		t[v] = combine(t[v * 2], t[v * 2 + 1]);
	}
}
