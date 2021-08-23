#include <bits/stdc++.h>
using namespace std;
// N-->点 M-->边
const int N = 1e5 + 10, M = 1e5 + 10;
int ver[M], edge[M], Next[M], head[N];
int used[N];
int tot;

void add(int x, int y, int z) {
    ver[++tot] = y, edge[tot] = z;
    Next[tot] = head[x], head[x] = tot;
}

void dfs(int x) {
    used[x] = 1;
    for (int i = head[x]; i; i = Next[i]) {
        int y = ver[i];
        if (used[y]) continue;
        dfs(y);
    }
}

int size[N];
void dfs(int x) {
    used[x] = 1;
    size[x] = 1;
    int max_part = 0;
    for (int i = head[x]; i; i = Next[i]) {
        int y = ver[i];
        if (used[y]) continue;
        dfs(y);
        size[x] += size[y];
        max_part = max(max_part, size[y]);
    }
    max_part = max(max_part, n - size[x]);
    if (max_part < res) {
        res = max_part;
        pos = x;
    }
}