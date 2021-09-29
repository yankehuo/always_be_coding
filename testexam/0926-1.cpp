#include <bits/stdc++.h>
using namespace std;
int T, num;
int tot = 0;
const int N = 1e5;

void getPrime(vector<int> &primes, vector<int> &is_primes) {
    primes.resize(N + 1);
    is_primes.resize(N + 1);
    for (int i = 2; i <= N; ++i) {
        is_primes[i] = 1;
    }
    for (int i = 2; i <= N; ++i) {
        if (is_primes[i]) {
            primes[tot++] = i;
            for (int j = 2 * i; j <= N; j += i) {
                is_primes[j] = 0;
            }
        }
    }
}

int findMin(int x, vector<int> &primes) {
    int p1 = *std::lower_bound(primes.begin(), primes.begin() + tot, 1 + x);
    int p2 = *std::lower_bound(primes.begin(), primes.begin() + tot, p1 + x);
    int val = p1 * p2;
    return val;
}

int main() {
    cin >> T;
    vector<int> primes, is_primes;
    getPrime(primes, is_primes);
    while (T-- > 0) {
        cin >> num;
        int res = findMin(num, primes);
        cout << res << endl;
    }

    return 0;
}