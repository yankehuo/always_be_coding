#include <iostream>

// insertion sort
// stable time:O(n2) extra space:O(1)
vector<int> sortArray(vector<int> &nums) {
	for (int i = 1; i < nums.size(); ++i) {
		int key = nums[i];
		int j = i;
		while (j > 0 && nums[j - 1] > key) {
			// j - 1 + 1
			nums[j] = nums[j - 1];
			--j;
		}
		nums[j] = key;
	}
	return nums;
}

// shell sort
// unstable time:O(n2) extra space:O(1)
// due to the gap
vector<int> sortArray(vector<int> &nums) {
	int gap = nums.size();
	while (gap > 1) {
		gap = gap / 3 + 1;
		for (int i = gap; i < nums.size(); ++i) {
			int key = nums[i];
			int j = i - gap + 1;
			while (j > 0 && nums[j - 1] > key) {
				nums[j - 1 + gap] = nums[j - 1];
				j -= gap;
			}
			nums[j - 1 + gap] = key;
		}
	}
	return nums;
}

// selection sort
// unstable time:O(n2) extra space:O(1)
// due to the swap operation
vector<int> sortArray(vector<int> &nums) {
	for (int i = 0; i < nums.size(); ++i) {
		int minidx = i;
		for (int j = i + 1; j < nums.size(); ++j) {
			if (nums[j] < nums[minidx])
				minidx = j;
		}
		swap(nums[i], nums[minidx]);
	}
	return nums;
}

// bubble sort
// stable time:O(n2) extra space:O(1)
vector<int> sortArray(vector<int> &nums) {
	for (int i = 0; i < nums.size(); ++i) {
		bool flag = true;
		for (int j = nums.size() - 1; j > i; --j) {
			if (nums[j] < nums[j - 1]) {
				swap(nums[j], nums[j - 1]);
				flag = false;
			}
		}
		if (flag)
			break;
	}
	return nums;
}

// heap sort
// unstable time:O(nlgn) extra space:O(1)
// due to the swap and siftdown
vector<int> sortArray(vector<int> &nums) {
	heapSort(nums);
	return nums;
}
void heapSort(vector<int> &nums) {
	heapify(nums);
	for (int i = nums.size() - 1; i > 0; --i) {
		swap(nums[0], nums[i]);
		siftdown(nums, 0, i);
	}
}
void heapify(vector<int> &nums) {
	int len = nums.size();
	for (int i = len / 2 - 1; i >= 0; --i) {
		siftdown(nums, i, len);
	}
}
void siftdown(vector<int> &nums, int root, int size) {
	while (2 * root + 1 < size) {
		int child1 = 2 * root + 1, child2 = 2 * root + 2;
		int child = (child2 < size && nums[child2] > nums[child1]) ? child2 : child1;
		if (nums[child] > nums[root])
			swap(nums[root], nums[child]);
		else
			break;

		root = child;
	}
}

// quick sort
// unstable time:O(n2) extra space:recursive best:O(lgn), worst:O(n)
// due to the exchange with pivot
vector<int> sortArray(vector<int> &nums) {
	quickSort(nums, 0, nums.size() - 1);
	return nums;
}
void quickSort(vector<int> &nums, int left, int right) {
	if (left >= right) return;
	int randidx = left + rand() % (right - left  + 1);
	swap(nums[randidx], nums[left]);
	int i = left, j = right;
	while (i < j) {
		while (i < j && nums[j] >= nums[left])
			--j;
		while (i < j && nums[i] <= nums[left])
			++i;
		swap(nums[i], nums[j]);
	}
	swap(nums[i], nums[left]);
	// return i --> partition
	// how to change into the iterative
	quickSort(nums, left, i - 1);
	quickSort(nums, i + 1, right);
}


// merge sort
// stabe time:O(nlgn) extra space:O(lgn)
vector<int> sortArray(vector<int> &nums) {
	vector<int> tmp(nums.size());
	mergeSort(nums, 0, nums.size() - 1, tmp);
	return nums;
}
// 1
void mergeSort(vector<int> &nums, int left, int right, vector<int> &tmp) {
	if (left >= right) return;
	int mid = left + (right - left) / 2;
	mergeSort(nums, left, mid);
	mergeSort(nums, mid + 1, right);
	for (int k = left; k <= right; ++k)
		tmp[k] = nums[k];
	int i = left, j = mid + 1;
	for (int k = left; k <= right; ++k) {
		if (i == mid + 1)
			nums[k] = tmp[j++];
		else if (j == right + 1)
			nums[k] = tmp[i++];
		else if (tmp[i] <= tmp[j])
			nums[k] = tmp[i++];
		else
			nums[k] = tmp[j++];
	}
}
// 2
void mergeSort(vector<int> &nums, vector<int> &tmp) {
	int len = nums.size();
	for (int sz = 1; sz < len; sz += sz) {
		for (int lo = 0; lo < len - sz; lo += sz + sz) {
			merge(nums, lo, lo + sz - 1, min(lo + sz + sz - 1, len - 1), tmp);
		}
	}
}
void merge(vector<int> &nums, int left, int mid, int right, vector<int> &tmp)  {
	// if (left >= right) return;
	for (int k = left; k <= right; ++k) 
		tmp[k] = nums[k];
	int i = left, j = mid + 1;
	for (int k = left; k <= right; ++k) {
		if (i == mid + 1)
			nums[k] = tmp[j++];
		else if (j == right + 1)
			nums[k] = tmp[i++];
		else if (tmp[i] <= tmp[j])
			nums[k] = tmp[i++];
		else
			nums[k] = tmp[j++];
	}
}

// counting sort
// stable time:O(n) extra space:O(n)
vector<int> sortArray(vector<int> &nums) {
	int maxval = nums[0], minval = nums[0];
	for (const int num : nums) {
		maxval = max(maxval, num);
		minval = min(minval, num);
	}
	int sz = maxval - minval + 1;
	vector<int> count(sz, 0);
	for (const int num : nums)
		++count[num - minval];
	for (int i = 1; i < sz; ++i)
		count[i] = count[i - 1] + count[i];
	vector<int> res(nums.size(), 0);
	for (int j = nums.size() - 1; j >= 0; --j) {
		int idx = --count[nums[j] - minval];
		res[idx] = nums[j];
	}
	return res;
}

// radix sort
// stable time:O(nk) extra space:O(n)
vector<int> sortArray(vector<int> &nums) {
	int len = nums.size();
	if (len <= 1) return nums;
	int minval = INT_MAX, maxval = INT_MIN;
	for (int i = 0; i < len; ++i) {
		maxval = max(maxval, nums[i]);
		minval = min(minval, nums[i]);
	}
	maxval = maxval > (-minval) ? maxval : -minval;
	int digit = 0;
	while (maxval > 0) {
		maxval /= 10;
		++digit;
	}
	// negative value?
	vector<vector<int>> bucket(19);
	int pos, cur;
	for (int i = 0, mod = 1; i < digit; ++i, mod *= 10) {
		for (int j = 0; j < len; ++j) {
			pos = (nums[j] / mod) % 10;
			bucket[pos + 9].push_back(nums[j]);
		}
		cur = 0;
		for (int j = 0; j < 19; ++j) {
			for (int k = 0; k < bucket[j].size(); ++k) {
				nums[cur++] = bucket[j][k];
			}
			bucket[j].clear();
		}
	}
	return nums;
}

// bucket sort
//   time:O(n2) extra space:O(n)
vector<int> sortArray(vector<int> &nums) {
	int len = nums.size();
	int maxval = INT_MIN, minval = INT_MAX;
	for (const int num : nums) {
		maxval = max(maxval, num);
		minval = min(minval, num);
	}
	int sz = (maxval - minval) / len + 1;
	vector<vector<int>> bucket(sz);
	for (int i = 0; i < len; ++i) {
		int id = (nums[i] - minval) / len;
		bucket[id].push_back(nums[i]);
	}
	int cur = 0;
	for (int i = 0; i < sz; ++i) {
		if (!bucket[i].empty()) {
			std::sort(bucket[i].begin(), bucket[i].end());
			for (int j = 0; j < bucket[i].size(); ++j) {
				nums[cur++] = bucket[i][j];
			}
		}
	}
	return nums;
}
