// binary search    newton method
#include <bits/stdc++.h>
class Solution{
public:
	int sqrt(int x){
		//brute force
		int res = 0;
		for(int i = 0; i <= x / 2 + 1; ++i){
			if(i * i == x){
				return i;
			}
			if(i * i > x){
				res = i - 1;
				break;
			}
		}
		return res;
	}
};

class Solution{
	int sqrt(int x){
		int res = 0;
		int left = 1, right = x;
		while(left <= right){
			int mid = left + (right - left) / 2;
			if(mid == x / mid){
				return mid;
			}
			else if(mid < x / mid){
				left = mid + 1;
			}
			else{
				right = mid - 1;
			}
		}
		return right;// > --> choose the left number
	}
};
class Solution{
	int sqrt(int x){
		// xi+1 = xi - (fxi / f'xi)
		long res = x;
		while(res * res > x){
			res = (res + x / res) / 2;
		}
		return res;
	}
};
