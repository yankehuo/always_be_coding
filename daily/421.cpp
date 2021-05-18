#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int findmaxxor(vector<int> &nums) {
		int mask = 0, res = 0, tmp = 0;
		for (int i = 31; i >= 0; --i) {
			unordered_set<int> seen;
			mask |= (1 << i);
			for (int num : nums) {
				seen.insert(num & mask);
			}
			tmp = res | (1 << i);
			for (int num : nums) {
				if (seen.count(tmp ^ (mask & num))) {
					res = res | (1 << i);
					break;
				}
			}
		}
		return res;
	}
};

struct TrieNode {
	TrieNode *next[2];
	TrieNode() {
		std::memset(next, 0, sizeof(next));
	}
};
class Trie {
private:
	TrieNode *root;
	void clear(TrieNode *root) {
		for (int i = 0; i < 2; ++i) {
			if (root->next[i]) {
				clear(root->next[i]);
			}
		}
		delete root;
	}
public:
	Trie() {
		root = new TrieNode;
	}
	~Trie() {
		clear(root);
	}
	void insert(int x) {
		TrieNode *cur = root;
		for (int i = 30; i >= 0; --i) {
			int u = x >> i & 1;
			if (!cur->next[u])
				cur->next[u] = new TrieNode();
			cur = cur->next[u];
		}
	}
	int search(int x) {
		TrieNode *cur = root;
		int res = 0;
		for (int i = 30; i >= 0; --i) {
			int u = x >> i & 1;
			if (cur->next[!u]) {
				cur = cur->next[!u];
				res = res * 2 + !u;
			}
			else {
				cur = cur->next[u];
				res = res * 2 + u;
			}
		}
		res ^= x;
		return res;
	}
};

class Solution {
public:
	int findMaximumXOR(vector<int> &nums) {
		Trie *cur = new Trie();
		for (int x : nums)
			cur->insert(x);
		int res = 0;
		for (int x : nums)
			res = max(res, cur->search(x));
		return res;
	}
};

int main() {
	return 0;
}
