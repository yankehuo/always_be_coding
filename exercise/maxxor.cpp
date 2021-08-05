#include <iostream>
using namespace std;

class Solution {
	int maxxor(vector<int> &nums) {
		int res = 0, mask = 0;
		int tmp = 0;
		for (int i = 30; i >= 0; --i) {
			unordered_set<int> st;
			mask |= 1 << i;
			//res |= res & (1 << i); 
			for (int num : nums) {
				st.insert(num & mask);
			}

			// greedy choose 1
			tmp = res | (1 << i);
			for (int num : nums) {
				if (st.count(tmp ^ (mask & num))) {
					res |= 1 << i;
					break;
				}
			}
		}
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

int main() {
	return 0;
}
