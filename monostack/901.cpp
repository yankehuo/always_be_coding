#include <bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
	StockSpanner() {
		arr.push_back(1e5 + 1);
		stk.push_back(idx);
	}

	int next(int price) {
		arr.push_back(price);
		++idx;

		while (price >= arr[stk.back()]) {
			stk.pop_back();
		}
		int res = idx - stk.back();
		stk.push_back(idx);
		return res;
	}
private:
	vector<int> stk;
	vector<int> arr;
	int idx = 0;
};

// exist problems
// solved
class StockSpanner {
public:
	StockSpanner() {
		arr.push_back(1e5 + 1);
		stk.push_back(idx);
	}

	int next(int price) {
		arr.push_back(price);
		++idx;
		int len = arr.size();
		int w = 1;
		int i = idx;
		while (i < len) {
			if (i < len && arr[stk.back()] > price) {
				stk.push_back(i);
				++i;
			}
			else {
				stk.pop_back();
				w = i - stk.back();
			}
		}
		return w;
	}

private:
	vector<int> stk;
	vector<int> arr;
	int idx = 0;
};
int main() {
	return 0;
}
