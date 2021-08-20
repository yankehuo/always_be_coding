#include <bits/stdc++.h>
using namespace std;

// N-->点集数，M-->边集数
// M=NlogN，边相对较少为稀疏图
// head Next存储ver的下标，ver存储每条边的终点
const int N = 1e5 + 10, M = 1e5 + 10;
int tot;
int ver[M], edge[M], Next[M], head[N];
// for dfs or bfs
bool used[N];
int dist[N];

void add(int x, int y, int z) {
    ver[++tot] = y, edge[tot] = z;
    Next[tot] = head[x], head[x] = tot;
}

void transfer(int x) {
    for (int i = head[x]; i; i = Next[i]) {
        int y = ver[i], z = edge[i];
        // 边（x，y）权值为z
    }
}

int main() {
    return 0;
}