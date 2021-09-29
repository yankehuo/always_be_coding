#include <bits/stdc++.h>
using namespace std;

int n, k;
int getreverse(int num) {
    int sum = 0;
    while (num) {
        sum = sum * 10 + num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    cin >> n >> k;
    int res = 0;
    for (int j = 1; j <= k; ++j) {
        res = max(res, getreverse(n * j));
    }
    cout << res << endl;

    return 0;
}