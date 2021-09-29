#include <bits/stdc++.h>
using namespace std;
string s;
vector<long long> nums;
vector<char> ops;

int grade(char op) {
    switch (op) {
        case '+':
            return 1;
        case 'x':
            return 2;
        case '@':
            return 3;
    }
    return 0;
}

void calcu(char op) {
    long long y = nums.back(); nums.pop_back();
    long long x = 0;
    if (!nums.empty()) {
        x = nums.back(); nums.pop_back();
    }
    long long z = 0;
    switch (op) {
        case '+':
            z = x + y;
            break;
        case 'x':
            z = x * y;
            break;
        case '@':
            z = x | (x + y);
            break;
    }
    nums.push_back(z);
}

int calc(string &s) {
    int n = s.size();
    long long val = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            val = val * 10 + s[i] - '0';
            if (s[i + 1] >= '0' && s[i + 1] <= '9') continue;
            nums.push_back(val);
            val = 0;
        }
        else {
            while (!ops.empty() && grade(ops.back()) >= grade(s[i])) {
                char op = ops.back(); ops.pop_back();
                calcu(op);
            }
            ops.push_back(s[i]);
        }
    }
    while (!ops.empty() && nums.size() >= 2) {
        char op = ops.back(); ops.pop_back();
        calcu(op);
    }
    return nums.front();
}

int main() {
    getline(cin, s);
    int res = calc(s);
    cout << res << endl;
    return 0;
}