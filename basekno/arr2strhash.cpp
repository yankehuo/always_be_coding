#include <bits/stdc++.h>
using namespace std;

const int P = 131; // 13331
// H(S)-->H(S+c) = H(S) * P + value[c]
// H(S), H(S+T)-->H(T) = H(S+T) - H(S) * P^(length(T))

const int N = 1e5 + 10;
char s[N];
unsigned long long f[N], p[N];
int main() {
    scanf("%s", s + 1);
    int n = strlen(s + 1), q;
    cin >> q;
    p[0] = 1; // 131^0
    for (int i = 1; i <= n; ++i) {
        f[i] = f[i - 1] * P + (s[i] - 'a' + 1); // hash of 1~i
        p[i] = p[i - 1] * P; // 131^i
    }
    for (int i = 1; i <= q; ++i) {
        int l1, r1, l2, r2;
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
        if (f[r1] - f[l1 - 1] * p[r1 - l1 + 1] == 
            f[r2] - f[l2 - 1] * p[r2 - l2 + 1]) {
                puts("Yes");
            }
        else {
            puts("No");
        }
    }

    return 0;
}