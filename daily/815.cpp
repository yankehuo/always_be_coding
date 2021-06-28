#include <bits/stdc++.h>
using namespace std;

int numBusesToDestination(vector<vector<int>> &routes, int source, int target) {
	if (source == target)
		return 0;
	int m = routes.size();
	vector<int> visited(m, -1);
	unordered_map<int, vector<int>> kv;
	for (int i = 0; i < m; ++i) {
		for (auto &stop : routes[i]) {
			kv[stop].push_back(i);
		}
	}
	queue<int> q;
	q.push(source);
	int cnt = 0;
	while (!q.empty()) {
		++cnt;
		int sz = q.size();
		for (int i = 0; i < sz; ++i) {
			int cur = q.front();
			q.pop();
			for (const int bus : kv[cur]) {
				if (visited[bus] != -1)
					continue;
				visited[bus] = 1;
				for (const int stop : routes[bus]) {
					if (stop == target)
						return cnt;
					q.push(stop);
				}
			}
		}
	}
	return -1;
}

int main() {
	return 0;
}
