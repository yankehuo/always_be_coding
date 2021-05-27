#include <bits/stdc++.h>
using namespace std;
class NestedIterator {
private:
	stack<NestedIterator> st;
public:
	NestedIterator(vector<NestedIterator> &nestedList) {
		for (int i = nestedList.size() - 1; i >= 0; --i) {
			st.push(nestedList[i]);
		}
	}

	int next() {
		NestedInteger cur = st.top();
		st.pop();
		return cur.getInteger();
	}

	bool hasNext() {
		while (!st.empty()) {
			NestedInteger cur = st.top();
			if (cur.isInteger()) {
				return true;
			}
			st.pop();
			for (int i = cur.getList().size() - 1; i >= 0; --i) {
				st.push(cur.getList()[i]);
			}
		}
		return false;
	}
};
int main() {
	return 0;
}
