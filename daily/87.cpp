#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool is_scrambel(string s1, string s2) {
		// memo i....len     j....len
		// i j len
		this->s1 = s1;
		this->s2 = s2;
		memset(memo, 0, sizeof(memo));
		return dfs(0, 0, s1.size());
	}
private:
	bool issamefreq(int i1, int j1, int len) {
		std::unordered_map<int, int> mp;
		for (int i = i1; i < i1 + len; ++i) {
			++mp[s1[i]];
		}
		for (int j = j1; j < j1 + len; ++j) {
			--mp[s2[j]];
		}
		for (const auto& p : mp) {
			if (p.second != 0) {
				return false;
			}
		}
		return true;
	}

	bool dfs(int i1, int j1, int len) {
		if (memo[i1][j1][len] == -1) {
			return false;
		}
		if (memo[i1][j1][len] == 1) {
			return true;
		}
		if (s1.substr(i1, len) == s2.substr(j1, len)) {
			memo[i1][j1][len] = 1;
			return true;
		}
		if (!issamefreq(i1, j1, len)) {
			memo[i1][j1][len] = -1;
			return false;
		}
		// i1... i1+i.......   j1... j1+i.......
		//    i       len-i       i       len-i
		// i1... i1+i.......   j1....... j1+len-i...
		//    i        len-i       len-i          i
		for (int i = 1; i < len; ++i) {
			if (dfs(i1, j1, i) && dfs(i1 + i, j1 + i, len - i)) {
				memo[i1][j1][i] = 1;
				return true;
			}
			if (dfs(i1 + i, j1, len - i) && dfs(i1, j1 + len - i, i)) {
				memo[i1][j1][i] = 1;
				return true;
			}
		}
		memo[i1][j1][len] = -1;
		return false;
	}
private:
	string s1, s2;
	int memo[30][30][31];
	// or datastructures: unordered_map<pair<string, string>, bool> memo;
	// s1 s2 --- count(exist string)_true_false
};
// unordered_map --- memo
class Solution {
public:
	bool isscramble(string s1, string s2) {
		using pa = pair<string, string>;
		if (memo.count(pa(s1, s2))) return memo[pa(s1, s2)] == 1;
		if (s1 == s2) return true;
		if (!issamefreq(s1, s2)) return memo[pa(s1, s2)] = false;
		int n = s1.size();
		for (int i = 1; i != n; ++i) {
			// partition by length
			if (isscramble(s1.substr(0, i), s2.substr(0, i)) && isscramble(s1.substr(i, n - i), s2.substr(i, n - i)))
				return memo[pa(s1, s2)] = true;
			if (isscramble(s1.substr(i, n - i), s2.substr(0, n - i)) && isscramble(s1.substr(0, i), s2.substr(n - i, i)))
				return memo[pa(s1, s2)] = true;
		}
		return memo[pa(s1, s2)] = false;
	}
private:
	unordered_map<pair<string, string>, bool> memo;

	bool issamefreq(string s1, string s2) {
		unordered_map<int, int> freq;
		for (const char c : s1) {
			++freq[c];
		}
		for (const char c : s2) {
			--freq[c];
		}
		for (const auto &s : freq) {
			if (s.second != 0) return false;
		}
		return true;
	}

};

int main() {
	return 0;
}
