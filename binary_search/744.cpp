#include <bits/stdc++.h>
class Solution{
	char nextGreast(vector<char>& letters, char target){
		int left = 0, right = letters.size();
		while(left < right){
			int mid = left + (right - left) / 2;
			if(target >= letters[mid]){
				left = mid + 1;
			}
			else{
				right = mid;
			}
		}
		return letters[left % letters.size()]; // left --> size
	}
};
// upper_bound
class Solution{
	char nextGreast(vector<char>& letters, char target){
		auto it = std::upper_bound(letters.begin(), letters.end());
		int idx = it - letters.begin();
		return letters[idx % letters.size()];
	}
};
int main(){
	return 0;
}
