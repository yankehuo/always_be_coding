#include <bits/stdc++.h>
using namespace std;
int t, num;

void solve(int num) {
    int res = 1;
    string s = to_string(num);
    int sz = s.size();
    for (int i = 0; i < sz; ++i) {
        int tmp = s[i] - '0';
        if (tmp > res) {
            res = tmp;
        }
    }
    cout << res << endl;
}

int main() {
    cin >> t;
    // int num;
    while (t--) {
        cin >> num;
        solve(num);
    }
    return 0;
}