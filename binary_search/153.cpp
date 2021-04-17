#include <bits/stdc++.h>
using namespace std;
class Solution{
	int findMin(vector<int>& nums){ // 主要性质比较，看区间划分
		int left = 0, right = nums.size() - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] > nums[right]){
				left = mid + 1;
			}
			else if(nums[mid] < nums[right]){
				right = mid;
			}
			else{
				assert(nums[mid] == nums[right]);
				--right;
			}
		}
		return nums[left];
	}
};
int main(){

}
