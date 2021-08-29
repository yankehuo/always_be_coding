#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int ver[N], edge[N], Next[N], head[N];
int size[N];
unordered_set<int> used;
int tot;
int n;
int res;

void add(int x, int y, int z) {
    ver[++tot] = x, edge[tot] = z, Next[tot] = head[x], head[x] = tot;
    size[head[x]] += z;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        vector<int> tmp;
        int a;
        while (scanf("%d,", &a)) {
            tmp.push_back(a);
        }
        cin >> a;
        tmp.push_back(a);
        int b;
        cin >> b;
        for (int num : tmp) {
            if (used.count(num)) {
                res = -1;
                cout << res << endl;
                return res;
            }
            used.insert(i);
            add(i + 1, num + 1, b);
        }

    }
    res = *max_element(size, size + n);

    cout << res << endl;
    return 0;
}