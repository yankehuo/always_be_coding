#include <bits/stdc++.h>
using namespace std;

vector<int> getTop(vector<int> &nums, int k) {
    priority_queue<int> pq;
    for (int i = 0; i < k; ++i)
        pq.push(nums[i]);
    for (int i = k; i < nums.size(); ++i) {
        auto cur = pq.top();
        if (nums[i] >= cur) {
            continue;
        }
        else {
            pq.pop();
            pq.push(nums[i]);
        }
    }
    vector<int> res;
    while (!pq.empty()) {
        auto cur = pq.top(); 
        pq.pop();
        res.emplace_back(cur);
    }
    return res;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.emplace_back(num);
    }
    int k;
    cin >> k;
    vector<int> res = getTop(nums, k);
    for (int per : res) {
        cout << per << " ";
    }
    cout << endl;

    return 0;
}