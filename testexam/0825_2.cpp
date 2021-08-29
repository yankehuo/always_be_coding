#include <bits/stdc++.h>
using namespace std;
const int N = 15;
int a[N][N];
int dirs[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int row, col;
int res;

using PII = pair<int, int>;
void decr() {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            --a[i][j];
        }
    }
}
int main() {
    cin >> row >> col;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> a[i][j];
        }
    }
    if (row + col - 2 > a[row - 1][col - 1]) {
        res = -1;
        cout << res << endl;
        return 0;
    }
    queue<PII> q;
    q.push({0, 0});
    while (q.size()) {
        ++res;
        decr();
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            auto cur = q.front(); q.pop();
            int x = cur.first, y = cur.second;
            for (int k = 0; k < 4; ++k) {
                int tx = x + dirs[k][0], ty = y + dirs[k][1];
                if (tx >= 0 && tx < row && ty >= 0 && ty < col && a[tx][ty]) {
                    //if ((row - tx) + (col - ty) > a[row - 1][col - 1])
                        //continue;
                    q.push({tx, ty});
                    if (tx == row - 1 && ty == col - 1) {
                        cout << res << endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}