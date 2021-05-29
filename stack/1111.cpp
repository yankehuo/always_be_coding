#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> maxDepth(string seq) {
		// (( )) |  () )(
		int len = seq.size();
		vector<int> res(len, 0);
		for (int i = 1; i < len; ++i) {
			if (seq[i] == seq[i - 1])
				res[i] = 1 - res[i - 1];
			else
				res[i] = res[i - 1];
		}
		return res;
	}

	vector<int> maxDepth(string seq) {
		int d = 0;
		vector<int> res;
		for (char c : seq) {
			if (c == '(') {
				++d;
				res.push_back(d % 2);
			}
			else {
				res.push_back(d % 2);
				--d;
			}
		}
		return res;
	}

	vector<int> maxDepth(string seq) {
		int len = seq.size();
		vector<int> res(len, 0);
		for (int i = 0; i < len; ++i) {
			res[i] = i & 1 ^ (seq[i] == '(');
		}
		return res;
	}
};
int main() {
	return 0;
}
