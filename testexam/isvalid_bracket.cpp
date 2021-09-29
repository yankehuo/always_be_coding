#include <bits/stdc++.h>
using namespace std;

int grade(char op) {
    switch (op) {
        case '{':
        case '}':
            return 1;
        case '(':
        case ')':
            return 2;
        case '[':
        case ']':
            return 3;
    }
    return 0;
}

bool isValid(string s) {
    unordered_map<char, char> mp{ {'}', '{'}, {')', '('}, {']', '['} };
    vector<char> stk;
    for (char c : s) {
        if (mp.count(c)) {
            if (stk.empty() || stk.back() != mp[c])
                return false;
            stk.pop_back();
        }
        else {
            if (!stk.empty() && grade(stk.back()) > grade(c))
                return false;
            stk.push_back(c);
        }
    }
    return stk.empty();
}

int main() {
    string s;
    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}