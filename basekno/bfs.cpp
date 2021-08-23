#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 1e5 + 10;
int ver[M], edge[M], Next[M], head[N];
int used[N];
int d[N];
int deg[N];
int tot;

void bfs() {
    queue<int> q;
    q.push(1);
    d[1] = 1;
    while (q.size() > 0) {
        int x = q.front(); q.pop();
        for (int i = head[x]; i; i = Next[i]) {
            int y = ver[i];
            if (d[y]) continue;
            d[y] = d[x] + 1;
            q.push(y);
        }
    }
}

void topsort() {
    int a[N], cnt;
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (deg[i] == 0) q.push(i);
    }
    while (q.size()) {
        int x = q.front(); q.pop();
        a[++cnt] = x;
        for (int i = head[x]; i; i = Next[i]) {
            int y = ver[i];
            if (--deg[y] == 0) q.push(y);
        }
    }
    
}
