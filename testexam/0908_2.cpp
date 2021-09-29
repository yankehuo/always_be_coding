#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (getchar() == '\n')
            break;
    }
    // for (int i = 0; i < 10; ++i) {
       //  cin >> nums[i];
    // }
    int left = 0, right = nums.size() - 1;
    for (int i = 0; i <= right; ) {
        if (nums[i] == 1) {
            swap(nums[left++], nums[i++]);
        }
        else if (nums[i] == 3) {
            swap(nums[i], nums[right--]);
        }
        else {
            ++i;
        }
    }
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}