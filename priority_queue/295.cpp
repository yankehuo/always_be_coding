#include <bits/stdc++.h>
using namespace std;
// solution 1: set rb_tree
class MedianFinder {
public:
	MedianFinder() {

	}

	void addNum(int num) {
		if (mst.empty()) {
			left = right = mst.insert(num);
			return;
		}
		mst.insert(num);
		// size
		const int n = mst.size();
		if (n & 0x1) {
			if (num >= *right) {
				++left;
			}
			else {
				left = --right;
			}
		}
		else {
			if (num >= *right) {
				++right;
			}
			else {
				--left;
			}
		}
	}

	double findMedian() {
		return (static_cast<double>(*left) +  static_cast<double>(*right)) / 2.0;
	}
private:
	multiset<int> mst;
	multiset<int>::const_iterator left, right;
};


// solution 2: two heaps-->priority_queue
class MedianFinder {
public:
	MedianFinder() {

	}

	void addNum(int num) {
		if (q1.empty() || num <= q1.top()) {
			q1.push(num);
		}
		else {
			q2.push(num);
		}
		if (q1.size() < q2.size()) {
			q1.push(q2.top());
			q2.pop();
		}
		if (q1.size() - q2.size() == 2) {
			q2.push(q1.top());
			q1.pop();
		}
	}

	double findMedian() {
		if ((q1.size() + q2.size()) & 0x1)
			return static_cast<double>(q1.top());
		return static_cast<double>((q1.top() + q2.top()) / 2.0);

	}
private:
	priority_queue<int, vector<int>, greater<int>> q2;
	priority_queue<int, vector<int>, less<int>> q1;

	
};

int main() {
	return 0;
}
