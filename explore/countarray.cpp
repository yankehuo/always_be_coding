#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int countarray(vector<string> &s) {
		return counta(s, 0);
	}
private:
	int counta(vector<string> &s, int index) {
		if (index >= s.size())
			return 0;
		return s[index].size() + counta(s, index + 1);
	}
};

int main() {
	vector<string> str = { "ab", "c", "def", "ghij" };
	vector<string> str2 = { "ab", "c" };
	int res1 = Solution().countarray(str);
	int res2 = Solution().countarray(str2);
	cout << res1 << endl;
	cout << res2 << endl;
	return 0;
}
