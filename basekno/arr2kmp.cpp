#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int lps[N];
char a[N];
char b[N];

// 可能不大懂
void kmp() {
    lps[1] = 0;
    for (int i = 2, j = 0; i <= n; ++i) {
        while (j > 0 && a[i] != a[j + 1]) 
            j = lps[j];
        if (a[i] == a[j + 1]) ++j;
        lps[i] = j;
    }
}

void ff() {
    for (int i = 1, j = 0; i <= m; ++i) {
        while (j > 0 && (j == n || b[i] != a[j + 1]))
            j = lps[j];
        if (b[i] == a[j + 1]) ++j;
        f[i] = j;
        // if (f[i] == n)
    }
}