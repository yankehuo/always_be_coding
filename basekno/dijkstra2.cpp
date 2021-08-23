#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 1e5 + 10;
int n, m, tot;
int ver[M], edge[M], Next[M], head[N];
int dist[N];
bool used[N];

using PII = pair<int, int>;
priority_queue<PII, vector<PII>, greater<PII>> pq;

void add(int x, int y, int z) {
    ver[++tot] = y, edge[tot] = z, Next[tot] = head[x], head[x] = tot;
}

int dijkstra() {
    memset(dist, 0x3f, sizeof(dist));
    memset(used, 0, sizeof(used));
    dist[1] = 0;
    // weight--point
    pq.push({0, 1});
    while (pq.size()) {
        int x = pq.top().second; pq.pop();
        if (used[x]) continue;
        used[x] = 1;
        for (int i = head[x]; i; i = Next[i]) {
            int y = ver[i], z = edge[i];
            if (dist[y] > dist[x] + z) {
                dist[y] = dist[x] + z;
                pq.push({dist[y], y});
            }
        }
    }
    if (dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);
    }
    cout << dijkstra() << endl;

    return 0;
}
