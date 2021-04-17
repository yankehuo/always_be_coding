#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> searchRange(vector<int>& nums, int target){
		if(nums.empty()) return {-1, -1};
		int x1 = lower(nums, target);
		if(x1 == nums.size() || nums[x1] != target)// left not found, then -1,-1
			return {-1, -1};
		int x2 = upper(nums, target);
		return {x1, x2};
	}
private:
	int lower(vector<int>& nums, int target){
		int left = 0, right = nums.size();
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] < target)
				left = mid + 1;
			else
				right = mid;
		}
		return left;
	}
	int higher(vector<int>& nums, int target){
		int left = 0, right = nums.size();
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] <= target)
				left = mid + 1;
			else
				right = mid;
		}
		return left - 1;
	}
};
// lower_bound maybe used twice
int main(){
	return 0;
}
