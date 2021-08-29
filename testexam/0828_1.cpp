#include <bits/stdc++.h>
using namespace std;

int T, N;
int a, b;
int main_life, mons_life;
int main_hurt, mons_hurt;
int main_rec;
// first--x  second.first--y  second.second--z
using PIII = pair<int, pair<int, int>>;

bool check(int life, vector<PIII> &v) {
	main_life = life;
	for (const auto &num : v) {
		int x1 = num.first, y1 = num.second.first, z1 = num.second.second;
		main_hurt = max(a - y1, 0);
		mons_life = z1, mons_hurt = max(0, x1 - b);
		while (mons_life > 0) {
			main_rec = max(main_hurt - mons_life, 0);
			mons_life -= main_hurt;
			main_life += main_rec;
			if (mons_life <= 0) break;
			if (main_rec > 0) break;
			main_life -= mons_hurt;
			// cout << main_life << "\n";
			if (main_life <= 0) return false;
		}
	}
	return true;
}

int main() {
	cin >> T;
	for (int i = 0; i < T; ++i) {
		cin >> N;
		cin >> a >> b;
		vector<PIII> v;
		int x, y, z;
		bool flag = true;
		for (int i = 0; i < N; ++i) {
			cin >> x >> y >> z;
			v.push_back({x, {y, z}});
		}
		int res = -1;
		for (const auto &num : v) {
			main_life = b, main_hurt = a - num.second.first;
			if (main_hurt <= 0) {
				flag = false;
				cout << res << "\n";
				// cout << "hello" << "\n";
				break;
			}
		}
		if (!flag) continue;
		
		
		int left = 1, right = 102;
		while (left < right) {
			int mid = left + (right - left) / 2;
			if (check(mid, v)) {
				right = mid;
			}
			else {
				left = mid + 1;
			}
		}
		res = left;
		if (res > 100) {
			res = -1;
			cout << res << "\n";
		}
		else {
			cout << res << "\n";
		}

	}
	return 0;
}
