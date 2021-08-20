#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int trie[N][26], tot = 1;
int end[N];
void insert(char *s) {
    int len = strlen(s), p = 1;
    for (int i = 0; i < len; ++i) {
        int ch = s[i] - 'a';
        if (trie[p][ch] == 0) trie[p][ch] = ++tot;
        p = trie[p][ch];
    }
    end[p] = true;
}

bool search(char *s) {
    int len = strlen(s), p = 1;
    for (int i = 0; i < len; ++i) {
        p = trie[p][s[i] - 'a'];
        if (p == 0) return false;
    }
    return end[p];
}