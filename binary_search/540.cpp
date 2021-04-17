#include <bits/stdc++.h>
using namespace std;
class Solution{
	int single(vector<int>& nums){
		int left = 0, right = nums.size() - 1;
		// right = mid --- left<--right
		// mid, mid + 1 --- even, odd
		// 越界问题
		while(left < right){
			int mid = left + (right - left) / 2;
			if(mid % 2 == 1)
				--mid;
			if(nums[mid] == nums[mid + 1])
				left = mid + 2;
			else{
				right = mid;
			}
		}
		return nums[left];
		// right = nums.size();
		// 比size-1偶数偏后
		// mid+1有可能到end位置
	}
};
int main(){
	return 0;
}
