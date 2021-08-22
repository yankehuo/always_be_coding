#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 10;
int arr[6], hold[6];
unordered_set<int> used;
int n, K;
void transfer() {
    for (int i = 1; i <= 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int a, b, c;
    cin >> n >> K;
    for (int i = 1; i <= 5; ++i)
        hold[i] = K;
    while (n--) {
        cin >> a >> b >> c;
        if (b != 0 && used.count(a)) {
            transfer();
            continue;
        }
        used.insert(a);

        if (b == 1) {
            if (arr[c] < hold[c]) {
                arr[c] += 1;
            }
            else {

            }
        }
        else {
            arr[c] -= 1;
        }
        transfer();
    }

    return 0;
}