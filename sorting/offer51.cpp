#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int reverse_pair(vector<int> &nums) {
		for (int num : nums) {
			sorted.push_back(num);
		}
		aux.resize(nums.size());
		merge_sort(sorted, 0, nums.size() - 1);
		return cnt;
	}
private:
	vector<int> sorted;
	vector<int> aux;
	int cnt = 0;
	void merge_sort(vector<int> &sorted, int left, int right) {
		if (left >= right) return;
		int mid = left + (right - left) / 2;
		merge_sort(sorted, left, mid);
		merge_sort(sorted, mid + 1, right);
		if(sorted[mid] <= sorted[mid + 1]) {
			return;
		}
		merge(sorted, left, mid, right);
	}
	void merge(vector<int> &sorted, int left, int mid, int right) {
		int i = left, j = mid + 1;
		for (int k = left; k <= right; ++k) {
			aux[k] = sorted[k];
		}
		for (int k = left; k <= right; ++k) {
			if (i > mid) {
				sorted[k] = aux[j];
				++j;
			}
			else if (j > right) {
				sorted[k] = aux[i];
				cnt += right - mid;
				++i;
			}
			else if (aux[i] <= aux[j]) {
				sorted[k] = aux[i];
				cnt += j - mid - 1;
				++i;
			}
			else {
				sorted[k] = aux[j];
				++j;
			}
		}

	}
};

int main() {
	return 0;
}
