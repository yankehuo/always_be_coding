#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	double findMedian(vector<int>& nums1, vector<int>& nums2){
		int m = nums1.size(), n = nums2.size();
		if(m > n) return findMedian(nums2, nums1);
		// median num 
		int cutNum = (m + n + 1) / 2;
		// process by binary search
		int left = 0, right = m;
		while(left < right){
			int mid1 = left + (right - left) / 2;
			int mid2 = cutNum - mid1;
			if(nums1[mid1 - 1] > nums2[mid2]){
				right = mid1 - 1; // [left, mid1 - 1]
			}
			else{
				left = mid1; // [mid1, right]
			}
		}
		int cut1 = left;
		int cut2 = cutNum - cut1;
		int L1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
		int R1 = cut1 == m ? INT_MAX : nums1[cut1];
		int L2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];
		int R2 = cut2 == n ? INT_MAX : nums2[cut2];
		return (m + n) % 2 ? std::max(L1, L2) : (std::max(L1, L2) + std::min(R1, R2)) / 2.0;
	}
};
int main(){

}
