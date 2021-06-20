#include <bits/stdc++.h>
using namespace std;
class Soluiton {
public:
	int maxLength(vector<string> &arr) {
		return dfs(arr, 0, arr.size(), 0);
	}
private:
	int dfs(vector<string> &arr, int start, int maxidx, int t) {
		if (start >= maxidx) {
			return 0;
		}
		int oldt = t;
		int len1 = 0;
		if (cancat(arr[start], t)) {
			len1 = arr[start].size() + dfs(arr, start + 1, maxidx, t);
		}
		int len2 = dfs(arr, start + 1, maxidx, oldt);
		return max(len1, len2);
	}
	bool cancat(string &str,  int &t) {
		// bits compress
		for (char c : str) {
			if (t & (1 << (c - 'a'))) {
				return false;
			}
			t |= (1 << (c - 'a'));
		}
		return true;
	}
};
int main() {
	return 0;
}
