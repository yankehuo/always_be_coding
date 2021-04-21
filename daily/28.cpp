#include <bits/stdc++.h>
using namespace std;

class Soltuion {
public:
	int strStr(string haystack, string needle) {
		int n = haystack.size(), m = needle.size();
		for (int i = 0; i + m <= n; ++i) {
			bool flag = true;
			for (int j = 0; j < m; ++j) {
				if (haystack[i + j] != needle[j]) {
					flag = false;
					break;
				}
			}
			if (flag)
				return i;
		}
		return -1;
	}
};

class Soltuion2 {
public:
	int strStr(string haystack, string needle) {
		int m = haystack.size(), n = needle.size();
		if (!n) return 0;
		vector<int> lps = kmp(needle);
		for (int i = 0, j = 0; i < m; ) {
			if (haystack[i] == needle[j]) {
				++i;
				++j;
			}
			if (j == n) return i - j;
			if (haystack[i] != needle[j]) {
				if (j != 0)
					j = lps[j - 1];
				else 
					++i;
			}
		}
		return -1;
	}
private:
	vector<int> kmp(const string& needle) {
		int n = needle.size();
		vector<int> lps(n);
		lps[0] = 0;
		int j = 0;
		for (int i = 1; i != n; ) {
			// aab
			if (needle[j] == needle[i]) {
				lps[i] = ++j;
				++i;
			}
			else {
				if (j != 0) {
					j = lps[j - 1];
				}
				else {
					lps[i] = 0;
					++i;
				}
			}
		}
		return lps;
	}
};

int main() {
	return 0;
}
