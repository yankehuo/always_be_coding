#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	// sort by ascending
	vector<int> SortArrays(vector<int> &nums) {
		// selection-sort
		// [i, sz - 1)
		for (int i = 0; i != nums.size() - 1; ++i) {
			int minidx = i;
			for (int j = i + 1; j != nums.size(); ++j) {
				if (nums[j] < nums[minidx]) {
					minidx = j;
				}
			}
			std::swap(nums[i], nums[minidx]);
		}
		return nums;
	}
};
class Solution2 {
public:
	// sort by ascending
	vector<int> SortArrays(vector<int> &nums) {
		// insertion-sort
		// [0, i)
		for (int i = 1; i != nums.size(); ++i) {
			int key = nums[i];
			int j = i;
			while (j > 0 && nums[j - 1] > key) {
				nums[j] = nums[j - 1];
				--j;
			}
			nums[j] = key;
		}
		return nums;
	}
};
class Solution3 {
public:
	// sort by ascending
	vector<int> SortArrays(vector<int> &nums) {
		// merge sort
		vector<int> tmp(nums.size());
		mergesort(nums, 0, nums.size() - 1);
		return nums;
	}
private:
	// aux top to down
	void mergesort(vector<int> &nums, int left, int right, vector<int> &tmp) {
		int mid = left + (right - left) / 2;	
		mergesort(nums, left, mid, tmp);
		mergesort(nums, mid + 1, right, tmp);
		if (nums[mid] <= nums[mid + 1]) {
			return;
		}
		merge(nums, left, mid, right, tmp);
	}
	// inplace merge sort bottom to up
	void inplace_mergesort(vector<int> &nums, vector<int> &tmp) {
		for (int sz = 1; sz < nums.size(); sz += sz) {
			for (int lo = 0; lo < nums.size() - sz; lo += sz + sz) {
				merge(nums, lo, lo + sz - 1, std::min(lo + sz + sz - 1, nums.size() - 1));
			}
		}
	}

	void merge(vector<int> &nums, int left, int mid, int right, vector<int> &tmp) {
		// base case !!!
		if(left >= right)
			return;
		std::copy(nums.begin() + left, nums.end() + right + 1, tmp.begin() + left);
		// for (int k = left; k <= right; ++k) {
		//		tmp[k] = nums[k];
		// }
		int i = left, j = mid + 1; 
		for	(int k = left; k <= right; ++k) {
			// [left..i] .. [mid + 1..j]
			// [..........k............]
			if (i == mid + 1) {
				nums[k] = tmp[j];
				++j;
			}
			else if (j == right + 1) {
				nums[k] = tmp[i];
				++i;
			}
			else if (tmp[i] <= tmp[j]) {
				nums[k] = tmp[i];
				++i;
			}
			else {
				nums[k] = tmp[j];
				++j;
			}
		}
	}
};

// quick sort 3
class Solution4 {
public:
	vector<int> SortArrays(vector<int> &nums) {
		srand((unsigned)time(nullptr));
		quick_sort(nums, 0, nums.size() - 1);
		return nums;
	}
private:
	void quick_sort(vector<int> &nums, int left, int right) {
		if (left >= right) return;
		int pcut = partition(nums, left, right);
		quick_sort(nums, left, pcut - 1);
		quick_sort(nums, pcut + 1, right);
	}
	int partition(vector<int> &nums, int left, int right) {
		int randidx = rand() % (right - left + 1) + left;
		std::swap(nums[left], nums[randidx]);
		int pivot = nums[left];

		// [left + 1, lt] < pivot
		// [lt + 1, i) == pivot
		// [gt, right] > pivot
		int lt = left;
		int gt = right + 1;
		for (int i = left + 1; i < gt; ) {
			if (nums[i] < pivot) {
				++lt;
				swap(nums[lt], nums[i]);
				++i;
			}
			else if (nums[i] == pivot) {
				++i;
			}
			else {
				--gt;
				swap(nums[i], nums[gt]);
			}
		}
		swap(nums[left], nums[lt]);
		return lt;
	}

};

// heap_sort
class Solution4 {
public:
	vector<int> SortArrays(vector<int> &nums) {
		heap_sort(nums);
		return nums;
	}
private:
	void siftdown(vector<int> &nums, int root, int size) {
		while (2 * root + 1 < size) {
			int c1 = 2 * root + 1;
			int c2 = 2 * root + 2;
			int c = (c2 < size && nums[c2] > nums[c1]) ? c2 : c1;
			if (nums[c] > nums[root]) {
				swap(nums[root], nums[c]);
			}
			else {
				break;
			}
			root = c;
		}
	}
	void heapify(vector<int> &nums) {
		int sz = nums.size();
		for (int i = sz / 2 - 1; i >= 0; --i) {
			siftdown(nums, i, sz);
		}
	}
	void heap_sort(vector<int> &nums) {
		// for (int i = nums.size() / 2 - 1; i >= 0; --i) {
		// 	siftdown(nums, i, nums.size());
		// }
		 heapify(nums);
		 for (int i = nums.size() - 1; i > 0; --i) {
			swap(nums[0], nums[i]);
			siftdown(nums, 0, i);
		}
	}
};

// counting sort
class Solution5 {
public:
	vector<int> SortArrays(vector<int> &nums) {
	}
private:
	vector<int> countsort(vector<int> &nums) {
		int max = nums[0];
		int min = nums[0];
		for(const int num : nums) {
			max = std::max(max, num);
			min = std::min(min, num);
		}
		int sz = max - min + 1;
		vector<int> count(sz, 0);
		for(const int num : nums) {
			++count[num - min];
		}
		for(int i = 1; i != sz; ++i) {
			count[i] = count[i - 1] + count[i];
			// count[i] += count[i - 1];
		}
		vector<int> res(nums.size(), 0);
		for(int j = nums.size() - 1; j >= 0; --j) {
			int idx = --count[nums[j] - min];
			res[idx] = nums[j];
		}

		// for(const int num : nums) {
		// 	int index = --count[num - min];
		// 	res[index] = num;
		// }
		return res;
	}

};

// bucket sort
class Solution5 {
public:
	vector<int> SortArrays(vector<int> &nums) {
		return bucketsort(nums);
	}
private:
	vector<int> bucketsort(vector<int> &nums) {
		int n = nums.size();
		if (n <= 1) return nums;
		int max = std::max(nums[0], nums[1]);
		int min = std::min(nums[0], nums[1]);
		for (const auto& num : nums) {
			max = std::max(num, max);
			min = std::min(num, min);
		}
		int bucketnum = (max - min) / n + 1;
		vector<vector<int>> bucket(bucketnum);
		for (const auto& num : nums) {
			int id = (num - min) / n;
			bucket[id].push_back(num);
		}
		int count = 0;
		for (int i = 0; i != bucketnum; ++i) {
			if (!bucket[i].empty()) {
				std::sort(bucket[i].begin(), bucket[i].end());
				for (int j = 0; j != bucket[i].size(); ++j) {
					nums[count] = bucket[i][j];
					++count;
				}
			}
		}
		return nums;
	}

};
















int main() {
	return 0;
}
