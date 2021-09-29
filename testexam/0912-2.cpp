#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int tmp = 0;
    while (n != 0) {
        if (tmp > INT_MAX / 10) {
            cout << "error" << endl;
            return 0;
        }
        int digit = n % 10;
        n /= 10;
        tmp = tmp * 10 + digit;
    }
    cout << tmp << endl;
    return 0;
}


/*
int main() {
    cin >> n;
    string s = to_string(n);
    string tmp = "2147483647";
    int sz = s.size();
    reverse(s.begin(), s.end());
    if (s.size() == 10 && s > tmp) {
        cout << "error" << endl;
        return 0;
    }
    cout << stoi(s) << endl;


    return 0;
}
*/