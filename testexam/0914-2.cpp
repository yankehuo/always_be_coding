#include <bits/stdc++.h>
using namespace std;
string s;
using pii = pair<int, int>;

bool getcnt(int a, int b, int c, int d, vector<pii> &cnt) {
    return (cnt[b].first - cnt[a - 1].first) == (cnt[d].first - cnt[c - 1].first) && 
    (cnt[b].second - cnt[a - 1].second) == (cnt[d].second- cnt[c - 1].second);
}

int main() {
    getline(cin, s);
    int n = s.size();
    vector<pii> cnt(n + 1); 
    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] == '1') {
            cnt[i].first = cnt[i - 1].first + 1;
            cnt[i].second = cnt[i - 1].second;

        }
        else {
            cnt[i].first = cnt[i - 1].first;
            cnt[i].second = cnt[i - 1].second + 1;
        }
    }
    // for (auto &p : cnt) {
        // cout << p.first << " " << p.second << endl;
    // }
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    for (int i = 1; i <= n; ++i) {
        x1 = i;
        for (int len = n - 2; x1 + len <= n; --len) {
            y1 = x1 + len;
            x2 = x1 + 1;
            y2 = x2 + len;
            // cout << x1 << y1 << x2 << y2 << endl;
            if (getcnt(x1, y1, x2, y2, cnt)) {
                cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
                return 0;

            }
        }
    }
    // cout << "0" << " " << "0" << " " << "1" << " " << "1" << endl;

    return 0;
}