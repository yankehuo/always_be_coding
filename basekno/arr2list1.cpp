#include <bits/stdc++.h>
using namespace std;
// 数组模拟链表
const int N = 1e5 + 10;
int ver[N], Next[N];
int head, tot;
// 在第k个数后增加节点，k可以是0，1，2等待，主要是ver数组储存
void add(int k, int x) {
	ver[++tot] = x, Next[tot] = Next[k], Next[k] = tot;
}
void remove(int k) {
	Next[k] =  Next[Next[k]];	
}
// 遍历
void transfer() {
	for (int i = Next[head]; i; i = Next[i]) {
		cout << ver[i] << ' ';
	}
	cout << endl;
}


int main() {
	// store at ver[1]
	add(0, 1);
	add(1, 2);
	add(2, 3);
	add(3, 4);
	add(4, 5);
	transfer();

	return 0;
}
