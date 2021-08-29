#include <bits/stdc++.h>
using namespace std;

int t;
int h, w;

void dfs(int i, int j, vector<vector<int>> &v) {
    if (i == h) return;
    if (i == 0) {
        for (int i = 0; i < h; ++i) {
            if (i & 0x1) v[0][i] = 1;
        }
    }
    for (int i = 1; i < h; ++i) {
        for (int j = 0; j < w; ++j)
        if (check(i, j) && (i == 0 || j == 0 || j == w - 1 || i == h - 1)) {
            v[i][j] = 1;
        }

    }


}
bool check(int i, int j, vector<vector<int>> &v) {
    int x = i, y = j;
    if (x - 1 >= 0 && v[x - 1][y] == 1) return false;
    if (x - 1 >= 0 && y - 1 >= 0 && v[x - 1][y - 1] == 1) return false;
    if (y - 1 >= 0 && v[x][y - 1] == 1) return false;
    return true;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> h >> w;
        vector<vector<int>> v(h, vector<int>(w, 0));
        dfs(0, 0, v);
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cout << v[i][j];
            }
            cout << "\n";
        }
        cout << endl;
    }

    return 0;
}