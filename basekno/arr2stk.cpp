#include <bits/stdc++.h>
using namespace std;
/*
const int N = 1e5 + 10;
int stk[N], tot = 0;
// 栈中插入元素
stk[++tot] = x;
// 弹出元素
--tot;
// 栈顶的值
stk[tot];
// 栈不空
if (tot > 0) {

}
*/
const int N = 1e5 + 10;
int stk[N], tot;
int m;

int main() {
    cin >> m;
    while (m--) {
        string op;
        int x;

        cin >> op;
        if (op == "push") {
            cin >> x;
            stk[++tot] = x;
        }
        else if (op == "pop") {
            --tot;
        }
        else if (op == "empty") {
            cout << (tot ? "NO" : "YES") << endl;
        }
        else {
            cout << stk[tot] << endl;
        }
    }
    return 0;
}