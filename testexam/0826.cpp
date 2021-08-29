#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
    getline(cin, s);
    // cout << s << endl;
    int n = s.size();
    int j = n - 1;
    vector<string> stk;
    string res;
    for (int i = n - 1; i >= 0 && j >= 0; ) {
        while (i >= 0 && s[i] == ' ') --i;
        if (i == -1) break;
        j = i;
        while (j >= 0 && s[j] != ' ') --j;
        string tmp = s.substr(j + 1, i - j);
        reverse(tmp.begin(), tmp.end());
        // cout << tmp << endl;
        stk.push_back(tmp);
        i = j;
        //cout << res;
    }
    while (!stk.empty()) {
        string cur = stk.back(); stk.pop_back();
        res += cur + " " ;
    }
    res.pop_back();
    cout << res << endl;

    return 0;
}