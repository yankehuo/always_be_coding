#include <iostream>
using namespace std;

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

void quick_sort(int a[], int left, int right) {
	if (left >= right) return;
	int randi = left + rand() % (right - left + 1);
	int pivot = a[randi];
	int i = left - 1, j = right + 1;
	while (i < j) {
		while (a[++i] < pivot) ;
		while (a[--j] > pivot) ;
		if (i < j) swap(a[i], a[j]);
	}
	quick_sort(a, left, j);
	quick_sort(a, j + 1, right);
}

void push2(stack<int> &s, int a, int b) {
	s.push(b), s.push(a);
}
int partition(int a[], int left, int right) {
	int i = left - 1, j = right + 1, pivot = a[left + rand() % (right - left + 1)];
	while (i < j) {
		while (a[++i] < pivot) ;
		while (a[--j] > pivot) ;
		if (i < j) swap(a[i], a[j]);
	}
	return j;
}
void quick_sort(int a[], int left, int right) {
	//stack<int> s(50);
	stack<int> s;
	push2(s, left, right);
	while (!s.empty()) {
		left = s.top(), s.pop();
		right = s.top(), s.pop();
		if (left >= right) continue;
		int j = partition(a, left, right);
		// prevent the stack overflow
		if (j - left + 1 > right - j) {
			push2(s, left, j), push2(s, j + 1, right);
		}
		else {
			push2(s, j + 1, right), push2(s, left, j);
		}
	}
}
