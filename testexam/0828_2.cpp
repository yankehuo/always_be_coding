#include <bits/stdc++.h>
using namespace std;

int T;
int N;

int main() {
	cin >> T;
	while (T--) {
		cin >> N;

		vector<int> nums[N];
		vector<int> time(N, 0);
		vector<int> indeg(N, 0);
		vector<int> f(N, 0);
		queue<int> q;

		for (int i = 0; i < N; ++i) {
			int a, b, c;
			cin >> a >> b;
			time[i] = a;
			if (b == 0) continue;
			while (b-- > 0) {
				cin >> c;
				nums[c - 1].push_back(i);
				++indeg[i];
			}
		}
		for (int i = 0; i < N; ++i) {
			if (indeg[i] == 0) {
				q.push(i);
				f[i] = time[i];
			}
		}

		while (q.size()) {
			int cur = q.front(); q.pop();
			for (int i = 0; i < nums[cur].size(); ++i) {
				f[nums[cur][i]] = max(f[nums[cur][i]], f[cur] + time[nums[cur][i]]);
				--indeg[nums[cur][i]];
				if (indeg[nums[cur][i]] == 0) {
					q.push(nums[cur][i]);
				}
			}
		}
		int res = 0;
		for (int i = 0; i < N; ++i) {
			if (f[i] > res) {
				res = f[i];
			}
		}
		cout << res << endl;

	}




	return 0;
}
