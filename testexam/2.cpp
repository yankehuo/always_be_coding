#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int sz[N], fa[N];
int n, m, max_number;

int get(int x) {
    if (x == fa[x]) return fa[x];
    return fa[x] = get(fa[x]);
}

void merge(int x, int y) {
    if (x == y) return;
    if (get(x) == get(y))
        return ;
    if (x < y) {
        // fa[get(x)] = get(y);
        // sz[get(y)] += sz[get(x)];
        // 先加再合并
        sz[get(y)] += sz[get(x)];
        fa[get(x)] = get(y);

        max_number = max(max_number, sz[get(y)]);
    }
    else {
        // fa[get(y)] = get(x);
        // sz[get(x)] += sz[get(y)];
        sz[get(x)] += sz[get(y)];
        fa[get(y)] = get(x);
        max_number = max(max_number, sz[get(x)]);
    }
}

int main() {
    cin >> n >> m;
    int a, b;
    for (int i = 1; i <= n; ++i) {
        fa[i] = i;
    }
    for (int i = 1; i <= n; ++i) {
        sz[i] = 1;
    }
    max_number = 1;

    while (m--) {
        cin >> a >> b;
        if (get(a) == get(b)) {
            cout << max_number - sz[get(a)] << "\n";
        }
        merge(a, b);

    }
    for (int i = 1; i <= n; ++i)
        cout << fa[i] << " ";
    cout << endl;
    return 0;
}