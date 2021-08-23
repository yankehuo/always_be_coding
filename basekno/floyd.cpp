#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dist[N][N];
int n, m;

void floyd() {
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}


int main() {
    cin >> n >> m;
    memset(dist, 0x3f, sizoef(dist));
    for (int i = 1; i <= n; ++i) {
        dist[i][i] = 0;
    }
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        dist[x][y] = min(d[x][y], z);
    }
    floyd();

    return 0;
}