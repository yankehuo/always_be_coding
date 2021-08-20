#include <bits/stdc++.h>
using namespace std;
int t;
string s;

bool check(string &s) {
	if (s.size() == 1) return false;
	int n = s.size();

	for (int i = 0; i + 1 < n; ++i) {
		if (s[i] == 'a') {
			int j = i;
			while (i + 1 < n && s[i + 1] == '#')
				++i;
			if (s[i + 1] == 'b') {
				s[j] = '#', s[i + 1] = '#';
			}
		}
	}

	return true;
	
}

int main() {
	cin >> t;
	while (t--) {
		cin >> s;
		if (check(s)) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
int n;
int a[N];

int getcntmax(int a[], int start) {
	map<int, int> kv;
	for (int i = start; i + 2 <= n; i = i + 2) {
		++kv[a[i]];
	}
	return kv.begin()->second;
}


int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	int odd = getcntmax(a, 1);
	int even = getcntmax(a, 2);
	int res = n - odd - even;
	cout << res << endl;
	return 0;
}
