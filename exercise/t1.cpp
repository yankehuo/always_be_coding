#include <bits/stdc++.h>
using namespace std;

class Trie {
private:
	vector<Trie*> children_;
	bool isend_;
public:
	Trie() : children_(2), isend_(false) {

	}
	// need ?
	void clear(Trie *node) {
		 for (int i = 0; i < 2; ++i) {
			 if (node->children_[i]) {
				 clear(node->children_[i]);
			 }
		 }
		 delete node;
	}

	 ~Trie() {
		 clear(this);
	 }

	void insert(int num) {
		Trie *node = this;
		for (int i = 30; i >= 0; --i) {
			int nowbit = num >> i & 1;
			if (!node->children_[nowbit]) {
				node->children_[nowbit] = new Trie();
			}
			node = node->children_[nowbit];
		}
		node->isend_ = true;
	}

	int search(int num) {
		Trie *node = this;
		int res = 0;
		for (int i = 30; i >= 0; --i) {
			int nowbit = num >> i & 1;
			if (node->children_[!nowbit]) {
				node = node->children_[!nowbit];
				res = (res << 1) | !nowbit; 
			}
			else {
				node = node->children_[nowbit];
				res = (res << 1) | nowbit; 
			}
		}
		res ^= num;
		return res;
	}
};

class Solution {
public:
	int maxxor(vector<int> &nums) {
		Trie *cur = new Trie();
		for (int num : nums) {
			cur->insert(num);
		}
		int res = 0;
		for (int num : nums) {
			res = max(res, cur->search(num));
		}
		return res;
	}
};




int main() {
	vector<int> nums = {3, 10, 5, 25, 2, 8};
	Solution *s1 = new Solution();
	cout << s1->maxxor(nums) << endl;
	delete s1;

	return 0;
}
