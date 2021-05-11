#include <iostream>
#include <vector>
using namespace std;
class UnionFind {
public:
	vector<int> parent;
	vector<int> rank;
	
	UnionFind(int n) {
		parent.resize(n);
		rank.resize(n);
		for (int i = 0; i < n; ++i) {
			parent[i] = i;
			rank[i] = 1;
		}
	}

	int findit(int x) {
		while (x != parent[x])
			parent[x] = findit(parent[x]);
		return parent[x];
	}

	void unionxy(int x, int y) {
		int px = findit(x), py = findit(y);
		if (px != py) {
			if (rank[px] > rank[py]) {
				parent[py] = px;
				rank[px] += rank[py];
			}
			else {
				parent[px] = py;
				rank[py] += rank[px];
			}
		}
	}
};
int main() {
	int n, m, p;
	cin >> n >> m >> p;
	UnionFind *uf = new UnionFind(n + 1);
	int mi, mj;
	for (int i = 0; i < m; ++i) {
		cin >> mi >> mj;
		uf->unionxy(mi, mj);
	}

	int pi, pj;
	for (int i =0; i < p; ++i) {
		cin >> pi >> pj;
		int ppi = uf->findit(pi), ppj = uf->findit(pj);
		if (ppi == ppj)
			cout << "Yes" << endl;
		else
	 		cout << "No" << endl;
	}
	return 0;
}

