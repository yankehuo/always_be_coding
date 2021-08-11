#include <iostream>


// adjacent list
int tot = 0;
const int kMAXN = 10000;
int ver[kMAXN], edge[kMAXN], next[kMAXN], head[kMAXN];
void add(int x, int y, int z) {
	ver[++tot] = x, edge[tot] = z;
	next[tot] = head[x], head[x] = tot;
}

for (int i = head[x]; i; i = next[i]) {
	int y = ver[i], z = edge[i];
	// do something
}


// list
struct Node {
	int value;
	int prev, next;
} node[SIZE];
int head, tail, tot;

int initialize() {
	tot = 2;
	head = 1, tail = 2;
	node[head].next = tail;
	node[tail].prev = head;
}
void insert(int p, int val) {
	q = ++tot;
	node[q].value = val;
	node[node[p].next].prev = q;
	node[q].next = node[p].next;
	node[p].next = q;
	node[q].prev = p;
}
void remvoe(int p) {
	node[node[p].prev].next = node[p].next;
	node[node[p].next].prev = node[p].prev;
}
void clear() {
	memset(node, 0, sizeof(node));
}
