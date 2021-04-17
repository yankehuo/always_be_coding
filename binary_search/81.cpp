#include <bits/stdc++.h>
using namespace std;
class Solution{
	bool search(vector<int>& nums, int target){
		int cut = findMin(nums);
		int l1 = lower(nums, target, 0, cut);
		int r1 = lower(nums, target, cut, nums.size() - 1);
		if(nums[l1] == target || nums[r1] == target)
			return true;
		else
			return false;
	}
private:
	int findMin(vector<int>& nums){
		int left = 0, right = nums.size() - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] > nums[right])
				left = mid + 1;
			else if(nums[mid] < nums[right])
				right = mid;
			else
				--right;
		}
		return left;
	}
	int lower(vector<int>& nums, int target, int left, int right){
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] < target)
				left = mid + 1;
			else
				right = mid;
		}
		return left;
	}
};
class Solution{
public:
	bool search(vector<int>& nums, int target){
		int left = 0, right = nums.size() - 1;
		while(left < right){
			int mid = left + (right - left + 1) / 2;
			if(nums[mid] < nums[right]){// sorted in right
				if(nums[mid] <= target && target <= nums[right]){
					left = mid;//[mid, right]
				}
				else{
					right = mid - 1;//[left, mid - 1]
				}
			}
			else if(nums[mid] > nums[right]){// not sorted in right
				if(nums[left] <= target && target <= nums[mid - 1])
					right = mid - 1; //[left, mid - 1]
				else
					left = mid; // [mid, right];
			}
			else{
				if(nums[right] == target)
					return true;
				else
					--right;
			}
		}
		return nums[left] == target;
	}
};
int main(){
}
