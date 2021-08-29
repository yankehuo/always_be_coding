#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int c[N], w[i];
int val;

int main() {
    w[] = {1, 2, 5, 10, 20, 50, 100};
    for (int i = 0; i < 7; ++i) {
        cin >> c[i];
    }
    cin >> val;
    int f[8][val + 1];
    memset(f, 0x3f, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= 7; ++i) {
        for (int j = w[i - 1]; j <= val; ++j)
        for (int k = 0; k <= c[i - 1]; ++k) {
            f[i][j] = max(f[i][j], f[i - 1][j - k * c[i - 1] + k * w[i - 1]]);
        }
    }
    cout << f[7][val] << endl;
    return 0;
}