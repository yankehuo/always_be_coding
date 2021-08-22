#include <bits/stdc++.h>
using namespace std;

const int N = 5e6 + 10;
int arr[N], cnt[3];
int diff1[N], diff2[N], n;

int main() {
    cin >> n;
    if (n & 0x1) {
        cout << "-1" << endl;
        return 0;
    }

    int a, b, c;
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a != 0) {
            ++cnt[a];
            continue;
        }
        else {
            cin >> b >> c;
            diff1[idx++] = b;
            diff2[idx++] = c;
        }
    }
    int maxn = n / 2 - cnt[1], maxm = n / 2 - cnt[2];
    int f[maxn + 1][maxm + 1];
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= idx; ++i) {
        for (int j = maxn; j >= 1; --j) {
            for (int k = maxm; k >= 1; --k) {
                f[j][k] = min(f[j][k], min(f[j - 1][k] + diff1[j - 1], f[j][k - 1] + diff2[k - 1]));
            }
        }
    }
    cout << f[maxn][maxm] << endl;

    return 0;
}