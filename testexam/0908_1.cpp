#include <bits/stdc++.h>
using namespace std;

string s, t;

int getLen(string &s, string &t) {
    int n = s.size(), m = t.size();
    int f[n + 1][m + 1];
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s[i - 1] == t[j - 1]) 
                f[i][j] = f[i - 1][j - 1] + 1;
            else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    return f[n][m];
}

int main() {
    getline(cin, s);
    getline(cin, t);
    int res = getLen(s, t);
    cout << res << endl;

    return 0;
}