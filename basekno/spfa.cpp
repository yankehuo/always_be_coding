#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 1e5 + 10;
int ver[M], edge[M], Next[M], head[N];
bool used[N];
int dist[N];
int n, m, tot;
queue<int> q;

int cnt[N]; // 存储1号点到x的最短路中经过的点数

void add(int x, int y, int z) {
    ver[++tot] = y, edge[tot] = z, Next[tot] = head[x], head[x] = tot;
}

int spfa() {
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    used[1] = 1;
    q.push(1);
    while (q.size()) {
        int x = q.front(); q.pop();
        used[x] = 0;
        for (int i = head[x]; i; i = Next[i]) {
            int y = ver[i], z = edge[i];
            if (dist[y] > dist[x] + z) {
                dist[y] = dist[x] + z;
                if (!used[y]) {
                    q.push(y);
                    used[y] = 1;
                }
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
    spfa();
    return 0;
}

bool spfa2() {
    memset(dist, 0x3f, sizeof(dist));
    memset(used, 0, sizeof(used));
    for (int i = 1; i <= n; ++i) {
        q.push(i);
        used[i] = 1;
    }
    while (q.size()) {
        int x = q.front(); q.pop();
        used[x] = 0;
        for (int i = head[x]; i; i = Next[i]) {
            int y = ver[i], z = edge[i];
            if (dist[y] > dist[x] + z) {
                dist[y] = dist[x] + z;
                // modified
                cnt[y] = cnt[x] + 1;
                if (cnt[y] >= n) return true;

                if (!used[y]) {
                    q.push(y);
                    used[y] = 1;
                }
            }
        }
    }
    return false;

}