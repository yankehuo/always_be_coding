#include <bits/stdc++.h>
using namespace std;

vector<int> getIndex(vector<int> &nums, int target) {
    unordered_map<int, int> kv;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (kv.count(nums[i])) {
            return {i, nums[i]};
        }
        kv.insert(nums[i]);
    }
    return {-1, -1};
}

int main() {
    vector<int> res;
    vector<int> nums{};
    res = getIndex(nums, target);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}