#include <bits/stdc++.h>
using namespace std;
int T, n;
const int N = 2e5 + 10;
int nums[N];

int calc() {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        sum += nums[i];
        int idx = i;
        while (nums[idx] < n) {
            idx = idx + nums[idx];
            if (idx > n) break;
            sum += nums[idx];
        }
        res = max(res, sum);
    }
    return res;
}

int main() {
    cin >> T;
    while (T-- > 0) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        int res = calc();
        cout << res << endl;
    }


    return 0;
}