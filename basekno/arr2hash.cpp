#include <bits/stdc++.h>
using namespace std;

// 拉链法？
const int N = 1e5 + 10;
int head[N], ver[N], Next[N], tot;
void insert(int x) {
    int k = (x % N + N) % N;
    ver[++tot] = x;
    Next[tot] = head[k];
    head[k] = tot;
}
bool find(int x) {
    int k = (x % N + N) % N;
    for (int i = head[k]; i; i = Next[i]) {
        if (ver[i] == x) return true;
    }
    return false;
}

// 开放地址法？
int head[N];
int find(int x) {
    int t = (x % N + N) % N;
    while (head[t] != 0 && head[t] != x) {
        ++t;
        if (t == N) t = 0;
    }
    return t;
}









int main() {

}