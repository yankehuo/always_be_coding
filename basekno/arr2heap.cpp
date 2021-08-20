#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
// 1 2 3 ... n
// 大根堆
int heap[N], n;
void up(int p) {
    while (p > 1) {
        if (heap[p] > heap[p / 2]) {
            swap(heap[p], heap[p / 2]);
            p /= 2;
        }
        else break;
    }
}

void insert(int val) {
    heap[++n] = val;
    up(n);
}

void down(int p) {
    int s = p * 2;
    while (s <= n) {
        if (s < n && heap[s] < heap[s + 1]) ++s;
        if (heap[s] > heap[p]) {
            swap(heap[s], heap[p]);
            p = s, s = p * 2;
        }
        else break;
    }
}

void gettop() {
    return heap[1];
}

void extract() {
    heap[1] = heap[n--];
    down(1);
}

void remove(int k) {
    heap[k] = heap[n--];
    up(k), down(k);
}