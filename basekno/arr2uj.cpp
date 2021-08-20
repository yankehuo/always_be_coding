#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// 朴素并查集
int fa[N]; // 存储节点
// 初始化
for (int i = 1; i <= n; ++i) fa[i] = i;

// 返回x的祖宗节点
int get(int x) {
    if (x == fa[x]) return x;
    return fa[x] = get(fa[x]);
}
// 合并操作
void merge(int x, int y) {
    fa[get(x)] = get(y);
}

// d[]维护到祖宗节点的距离，size[]记录祖宗节点的大小
int fa[N], d[N];
int size[N];

int get(int x) {
    if (x == fa[x]) return x;
    int root = get(fa[x]);
    d[x] += d[fa[x]]; // d[x]存储x到fa[x]的距离
    return fa[x] = root;
}
// 初始化
// 合并