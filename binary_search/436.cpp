#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> findRightInterval(vector<vector<int>>& intervals){
		vector<pair<int, int>> arr;
		for(int i = 0; i != intervals.size(); ++i){
			arr.push_back(make_pair(intervals[i][0], i));
		}
		std::sort(arr.begin(), arr.end());
		vector<int> res;
		for(int i = 0; i != intervals.size(); ++i){
			int val = findMj(arr, intervals[i][1]);
			res.push_back(val);
		}
		return res;

	}
private:
	int findMj(vector<pair<int, int>>& arr, int target){
		int left = 0, right = arr.size() - 1;
		while(left < right){
			int mid = left + (right - left) / 2;
			if(arr[mid].first < target){
				left = mid + 1; //[mid + 1, right]
			}
			else{
				right = mid; //[left, mid]
			}
		}
		return arr[left].first >= target ? arr[left].second : -1;
	}
};
int main(){
	return 0;
}
