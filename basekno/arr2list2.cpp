#include <bits/stdc++.h>
using namespace std;
// 模拟双链表
const int N = 1e5 + 10;
int tot;
int ver[N], l[N], r[N];
// ver[N]存值从3开始
// head-->1  tail-->2
void init() {
    l[2] = 1, r[1] = 2;
    tot = 2;
}
// 在k的右边插入一个
void add(int k, int x) {
    ver[++tot] = x;
    l[tot] = k, r[tot] = r[k];
    l[r[k]] = tot, r[k] = tot;
}
// 在左边插入一个：add(l[k], x);

// 删除
void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}


void transfer() {
    for (int i = r[1]; i != 2; i = r[i]) {
        cout << ver[i] << ' ';
    }
    cout << endl;
}

int main() {
    init();
    // add at right  --> 1 2 3
    add(l[2], 1);
    add(l[2], 2);
    add(l[2], 3);
    // add at left --> 3 2 1 1 2 3
    add(1, 1);
    add(1, 2);
    add(1, 3);

    transfer();
    return 0;
}