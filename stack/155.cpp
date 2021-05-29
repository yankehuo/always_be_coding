#include <bits/stdc++.h>
using namespace std;
class MinStack{
public:
	MinStack() {

	}

	void push(int x) {
		s1.push_back(x);
		if (s2.empty() || x <= s2.back())
			s2.push_back(x);
	}
	void pop() {
		if (s2.back() == s1.back())
			s2.pop_back();
		s1.pop_back();
	}
	int top() {
		return s1.back();
	}
	int getMin() {
		return s2.back();
	}
private:
	vector<int> s1;
	vector<int> s2;
};
class MinStack() {
private:
	long min = 0;
	vector<long> stk;
public:
	MinStack() {}
	void push(int x) {
		if (stk.empty()) {
			min = x;
			stk.push_back(0L);
		}
		else {
			long diff = x - min;
			stk.push_back(diff);
			if (diff < 0) {
				min = x;
			}
		}
	}
	void pop() {
		if (stk.empty())
			return;
		long diff = stk.back();
		stk.pop_back();
		if (diff < 0) {
			min = min - diff;
		}
	}
	int top() {
		if (stk.back() < 0)
			return min;
		return stk.back() + min;
	}
	int getMin() {
		return min;
	}
};

class MinStack {
private:
	vector<pair<int, int>> stk;
public:
	MinStack() {}
	void push(int x) {
		if (stk.empty()) {
			stk.push_back({x, x});
		}
		else {
			stk.push_back({x, min(x, stk.back().second)});
		}
	}
	void pop() {
		stk.pop_back();
	}
	int top() {
		return stk.back().first;
	}
	int getMin() {
		return stk.back().second;
	}
};
int main() {
	return 0;
}
