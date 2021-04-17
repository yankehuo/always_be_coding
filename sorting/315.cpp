#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> counts;
	vector<int> countsmaller(vector<int> &nums) {
		vector<pair<int, int>> idx;
		for (int i = 0; i != nums.size(); ++i) {
			idx.push_back(make_pair(nums[i], i));
		}
		counts.resize(nums.size());
		merge_sort(idx, 0, nums.size() - 1);
		return counts;
	}
private:
	void merge_sort(vector<pair<int, int>> &idx, int left, int right) {
		// base case
		if(left >= right)
			return;
		int mid = left + (right - left) / 2;
		merge_sort(idx, left, mid);
		merge_sort(idx, mid + 1, right);
		merge(idx, left, mid, right, aux);
	}
	void merge(vector<pair<int, int>> &idx, int left, int mid, int right) {
		int i = left, j = mid + 1;
		vector<pair<int, int>> aux(idx.size());
		for (int k = left; k <= right; ++k) {
			aux[k] = idx[k];
		}
		for (int k = left; k <= right; ++k) {
			if (i > mid) {
				idx[k] = aux[j];
				++j;
			}
			else if (j > right) {
				idx[k] = aux[i];
				counts[idx[k].seond] += right - mid;
				++i;
			}
			else if (aux[i] <= aux[j]) {
				// [mid + 1, j - 1]
				idx[k] = aux[i];
				counts[idx[k].second] += j - mid - 1;
				++i;
			}
			else {
				idx[k] = aux[j];
				++j;
			}
		}
	}
};
int main() {
	return 0;
}
