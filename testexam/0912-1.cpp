#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}


int main() {
    int a, b;
    cin >> a >> b;

    int res = gcd(a, b);
    if (a > b && res == b) {
        cout << "yes" << endl;
    }
    cout << res << endl;

    return 0;
}