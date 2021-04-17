#include <bits/stdc++.h>
using namespace std;
class Solution{
	int firstBadversion(int n){
		int left = 1, right = n + 1; // overflow
		while(left < right){
			int mid = left + (right - left) / 2;
			if(isBadVersion(mid)){
				right = mid;
			}
			else{
				left = mid + 1;
			}
		}
		return left;
	}
};
int main(){

}
