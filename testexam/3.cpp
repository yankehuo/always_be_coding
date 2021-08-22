#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> vs;
int cnt = 0;

void dfs(int i, int j, int k, vector<vector<int>> &used) {
    if (i < 0 || i >= N || j < 0 || j >= N || used[i][j] || vs[i][j] == '#')
        return;
    if (k == 1) {
        ++cnt;
        return;
    }
    used[i][j] = 1;
    dfs(i + 1, j, k - 1, used);
    dfs(i - 1, j, k - 1, used);
    dfs(i, j + 1, k - 1, used);
    dfs(i, j - 1, k - 1, used);
    used[i][j] = 0;
}



int main() {
    cin >> N;
    vs.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> vs[i];
    }
    int num = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (vs[i][j] == '.') {
                ++num;
            }
        }
    }
    vector<vector<int>> used(N, vector<int>(N));
    dfs(0, 0, num, used);
    cout << cnt << endl;

    return 0;
}