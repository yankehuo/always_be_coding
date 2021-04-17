#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int hIndex(vector<int>& citations){
		// nums[x] >= sz - x, find max sz - x
		int sz = citations.size();
		int left = 0, right = sz - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(citations[mid] < sz - mid){
				// [mid + 1, right]
				left = mid + 1;
			}
			else{
				// [left, mid]
				right = mid;
			}
		}
		return sz - left;
	}
};
int main(){

}
