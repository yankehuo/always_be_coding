#include <iostream>
#include <vector>
using namespace std;
class UnionFind {
public:
	vector<int> parent;
	
	UnionFind(int n) {
		parent.resize(n);
		for (int i = 0; i < n; ++i) {
			parent[i] = i;
		}
	}

	int findit(int x) {
		while (x != parent[x])
			parent[x] = findit(parent[x]);
		return parent[x];
	}

	void unionxy(int x, int y) {
		int px = findit(x), py = findit(y);
		if (px != py)
			parent[px] = py;
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

