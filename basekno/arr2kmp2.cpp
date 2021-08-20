#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string s, string p) {
        int n = s.size(), m = p.size();
        if (!m) return -1; // exception
        kmp(p);
        for (int i = 0, j = 0; i < n; ) {
            if (s[i] == p[j]) {
                ++i, ++j;
                if (j == m) return i - j;
            }
            else {
                if (j == 0) ++i;
                else j = lps[j - 1];
            }
        }
        return -1;
    }
private:
    vector<int> lps;
    void kmp(string &p) {
        int sz = p.size();
        lps.resize(sz);
        lps[0] = 0;
        for (int i = 1, j = 0; i < sz; ) {
            if (p[i] == p[j]) lps[i++] = ++j;
            else {
                if (j != 0) j = lps[j - 1];
                else lps[i++] = 0;
            }
        }
    }
};

int main() {
    string s, p;
    cin >> s >> p;
    int res = Solution().strStr(s, p);
    cout << res << "\n";

    return 0;
}