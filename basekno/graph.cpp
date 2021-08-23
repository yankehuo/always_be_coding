#include <bits/stdc++.h>
using namespace std;
// n-->点 m-->边
const int N = 1e5 + 10;
int g[N][N], dist[N], used[N];
int n, m;

int dijkstra() {
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    for (int i = 1; i < n; ++i) {
        int x = 0;
        // 找到未被标记的节点中dist最小的
        for (int j = 1; j <= n; ++j) {
            if (!used[j] && (x == 0 || dist[j] < dist[x]))
                x = j;
        }
        used[x] = 1;
        // 用全局最小值点x更新其他节点
        for (int y = 1; y <= n; ++y) {
            dist[y] = min(dist[y], dist[x] + g[x][y]);
        }
    }
    if (dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}

int main() {
    cin >> n >> m;
    memset(g, 0xef, sizeof(g));
    for (int i = 1; i <= n; ++i) g[i][i] = 0;
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        g[x][y] = min(g[x][y], z);
    }
    printf("%d\n", dijkstra());
    return 0;
}
