#include <bits/stdc++.h>
using namespace std;

S[i] = a[1] + a[2] + ... + a[i];
a[l] + ... + a[r] = S[r] - S[l - 1];

S[i, j] = // 第i行第j列左上部分所有元素的和
// 以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵的和
S[x2, y2] - S[x1 - 1, y2] - S[x2, y1 - 1] + S[x1 - 1, y1 - 1];

// A[] 原数组  B[]差分数组
// 一维差分
B[1] = A[1], B[i] = A[i] - A[i - 1];

B[l] += c, B[r + 1] -= c;
// 二维差分
B[i][j] = A[i][j] - A[i - 1][j] - A[i][j - 1] + A[i - 1][j - 1];

B[x1, y1] += c, B[x2 + 1, y1] -= c, 
B[x1, y2 + 1] -= c, B[x2 + 1, y2 + 1] += c;

n >> k & 1; // 取第k位
lowbit(n) = n & -n; // n的最后一位1