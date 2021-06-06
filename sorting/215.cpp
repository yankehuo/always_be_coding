#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int findktop(vector<int> &nums, int k) {
		int sz = nums.size();
		return quick_select(nums, 0, sz - 1, sz - k);
	}

private:
	// modified
	int quick_select(vector<int> &nums, int left, int right, int i) {
		if (left == right) return nums[left];
		int pcut = partition(nums, left, right);
		int len = right - left + 1;
		if (i == len) {
			return nums[pcut];
		}
		else if (i < len) {
			return quick_select(nums, left, pcut - 1, i);
		}
		else {
			return quick_select(nums, pcut + 1, right, i - len);
		}
	}
	int partition(vector<int> &nums, int left, int right) {
		int randidx = rand() % (right - left + 1) + left;
		swap(nums[randidx], nums[left]);
		int pivot = nums[left];
		// [left, lt] < pivot
		// [lt + 1, i - 1] == pivot
		// [gt, right] > pivot
		int lt = left, gt = right + 1;
		int i = left + 1;
		while (i < gt) {
			if (nums[i] < pivot) {
				++lt;
				swap(nums[i], nums[lt]);
				++i;
			}
			else if (nums[i] > pivot) {
				--gt;
				swap(nums[i], nums[gt]);
			}
			else {
				++i;
			}
		}
		swap(nums[left], nums[lt]);
		return lt;
	}
};
// partial_sort (stl)
// learn all standard

// heap_sort
// priority_queue
class Solution2 {
public:
	int find_kth(vector<int> &nums, int k) {
		return heap_sort(nums, k);
	}
private:
	void sink(vector<int> &nums, int root, int size) {
		while (2 * root + 1 < size) {
			int left = 2 * root + 1;
			int right = 2 * root + 2;
			int c = (right < size && nums[right] > nums[left]) ? right : left;
			if (nums[root] < nums[c])
				swap(nums[root], nums[c]);
			else
				break;
			root = c;
		}
	}
	void heapify(vector<int> &nums) {
		int size = nums.size();
		for (int i = nums.size() / 2 - 1; i >= 0; --i) {
			sink(nums, i, size);
		}
	}
	int heap_sort(vector<int> &nums, int k) {
		heapify(nums);
		int sz = nums.size();
		int idx = nums.size() - 1;
		for (int i = nums.size() - 1; i >= sz - k; --i) {
			swap(nums[0], nums[i]);
			sink(nums, 0, i);
			idx = i;
		}
		return nums[idx];
	}
};

class Solution3 {
public:
	int find_kth(vector<int> &nums, int k) {
		// greater<int>
		std::priority_queue<int, vector<int>, greater<int>> pq; 
		for (const int num : nums) {
			pq.push(num);
			if (pq.size() > k) {
				pq.pop();
			}
		}
		return pq.top();
	}
	
};
















int main(){
	vector<int> nums = {2, 1, 3};
	Solution2 cal;
	int res = cal.find_kth(nums, 3);
	cout << res << endl;
	return 0;
}
