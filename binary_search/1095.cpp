#include <bits/stdc++.h>
using namespace std;
class Solution{
public: 
	int findMountain(int target, MountainArray& mountainArr){
		int sz = mountainArr.length();
		int cut = findMax(mountainArr);
		int l1 = findLeft(target, mountainArr, 0, cut);
		int r1 = findRight(target, mountainArr, cut, sz - 1);
		if(l1 == -1 && r1 == -1) return -1;
		if(l1 != -1 && r1 != -1) return std::min(l1, r1);
	}
private:
	int findLeft(int target, MountainArray& mountainArr, int left, int right){
		int left = 0;
		int right = findMax(mountainArr);
		while(left < right){
			int mid = left + (right - left) / 2;
			if(mountainArr.get(mid) < target){
				left = mid + 1;
			}
			else{
				right = mid;
			}
		}
		return mountainArr.get(left) == target ? left : -1;
	}
	int findRight(int target, MountainArray& mountainArr, int left, int right){
		int left = 0;
		int right = sz - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(mountainArr.get(mid) > target){
				left = mid + 1;
			}
			else{
				right = mid;
			}
		}
		return mountainArr.get(left) == target ? left : -1;
	}

	int findMax(MountainArray& mountainArr){
		//int left = 0, right = mountainArr.length() - 1;
		int left = 0, right = sz - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(mountainArr.get(mid) < mountainArr.get(mid + 1))
				left = mid + 1;
			else{
				right = mid;
			}
		}
		return left;
	}
};
int main(){
	return 0;
}
