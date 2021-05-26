#include <bits/stdc++.h>
using namespace std;
class Trie {
private:
	bool is_end = false;
	Trie *next[26] = {nullptr};
public:
	Trie() {}
	~Trie() {
		for (int i = 0; i < 26; ++i)
			if (this->next[i])
				delete this->next[i];
	}
	
	void insert(const string &word) {
		Trie *node = this;
		for (char c : word) {
			if (!node->next[c - 'a'])
				node->next[c - 'a'] = new Trie();
			node = node->next[c - 'a'];
		}
		node->is_end = true;
	}

	bool search(const string &word) {
		Trie *node = this;
		for (char c : word) {
			if (!node->next[c - 'a'])
				return false;
			node = node->next[c - 'a'];
		}
		return node->is_end;
	}
	
	bool startswith(string prefix) {
		Trie *node = this;
		for (char c : prefix) {
			if (!node->next[c - 'a'])
				return false;
			node = node->next[c - 'a'];
		}
		return true;
	}
};
int main() {
	return 0;
}
