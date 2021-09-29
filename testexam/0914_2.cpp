#include <bits/stdc++.h>
using namespace std;
int N, K;

int getTime(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int sz = nums.size();
    int res = 0;
    int i = sz - 1;
    for (; i - K + 1 >= 0; i -= K) {
        res += (nums[i] - 1) * 2;
    }
    res += (nums[i] - 1) * 2;
    return res;
}

int main() {
    cin >> N >> K;
    vector<int> nums(N);
    for (int i = 1; i <= N; ++i) {
        cin >> nums[i - 1];
    }
    int cnt = getTime(nums);
    cout << cnt << endl;

    return 0;
}