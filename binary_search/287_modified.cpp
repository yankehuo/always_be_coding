#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int findDup(vector<int>& nums){
		std::sort(nums.begin(), nums.end());
		int left = 0, right = nums.size() - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(nums[mid] == nums[mid - 1] || nums[mid] == nums[mid + 1])
				return nums[mid];
			if(nums[mid] < nums[mid + 1]){
				
			}
		}
	}
};
int main(){

}
