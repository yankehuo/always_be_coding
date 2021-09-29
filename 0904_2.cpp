#include <bits/stdc++.h>
using namespace std;

const int N = 600;
int n, m;
vector<int> statoline[N];
vector<int> linetosta[N];

int getCnt(int i, int j) {
	if (i == j) return 0;
	queue<int> q;
	int s = i, t = j;
	for (int line : statoline[s]) {
		q.push(line);
	}
	vector<bool>used(N, 0);
	// unordered_map<int, int> mp;
	int step = 1;
	while (!q.empty()) {
		int curline = q.front(); q.pop();
		++step;
		for (int sta : linetosta[curline]) {
			 if (sta == t) return step;
			 for (int line : statoline[sta]) {
				 if (!used[line]) {
					 q.push(line);
				 }
				 used[line] = true;
			 }
		}
	}
	return -1;

}

int main() {
	cin >> n >> m;
	int k = 1;
	int tmp = 0;
	cin >> k;
	for (int i = 1; i <= k; ++i) {
		cin >> tmp;
		statoline[k].push_back(tmp);
		linetosta[tmp].push_back(k);
	}
	for (int i = 1; i <= n; ++i) {
		bool flag = false;
		for (int j = 1; j <= n; ++j) {
			int res = getCnt(i, j);
			if (j == n) 
				flag = true;
			if (!flag)
				cout << res << " ";
			else
				cout << res;
		}
		cout << "\n";
	}




	return 0;
}
