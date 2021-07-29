#include <bits/stdc++.h>
using namespace std;
string findMinOverrider(string source, string target) {
	int len = source.size();
	unordered_map<char, int> freq;
	int count = 0;
	for (char c : target) {
		++freq[c];
	}
	int right = 0, left = 0;
	int minlen = len, start = 0;
	while (right < len) {
		char rightch = source[right];
		if (freq.count(rightch)) {
			--freq[rightch];
		}
		if (freq[rightch] >= 0) {
			++count;
		}
		++right;
		while (count == target.size()) {
			if (minlen > right - left + 1) {
				minlen = right - left + 1;
				start = left;
			}
			char leftch = source[left++];
			if (freq.count(leftch)) {
				if (freq[leftch] == 0)
					--count;
				++freq[leftch];
			}
		}
	}
	return minlen > source.size() "" : source.substr(start, minlen);
}
int main() {
	string s = "abc", t = "bc";
	string res = findMinOverrider(s, t);
	cout << res << endl;
	return 0;
}
