#include <bits/stdc++.h>
using namespace std;

// 普通队列 head->队头，tail-->队尾
int q[N], head = 0, tail = -1;
// insert at tail
q[++tail] = x;
// pop at head
++head;
// if no empty? 不空
if (head <= tail) {

}

// 有些问题如何判断队列已满？
// 循环队列 head->队头，tail-->队尾的后一个位置
int q[N], head = 0, tail = 0;
// 向队尾插入一个数
q[tail++] = x;
if (tail == N) tail = 0;
// 从队头弹出一个数
++head;
if (head == N) head = 0;
// 队头的值
q[head];
// 判断队列不空
if (head != tail) {

}

// other version
int q[N], head, tail;
bool isempty() {
    return head == tail;
}
bool isfull() {
    return (tail + 1) % N == head;
}
bool enque(int x) {
    if (isfull()) return false;
    q[tail] = x;
    tail = (tail + 1) % N;
    return true;
}
bool deque() {
    if (isempty()) return false;
    head = (head + 1) % N;
    return true;
}
int front() {
    if (isempty()) return -1;
    return q[head];
}
int back() {
    if (isempty()) return -1;
    return q[(tail - 1 + N) % N];
}