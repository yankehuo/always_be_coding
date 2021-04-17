#include <bits/stdc++.h>
using namespace std;
class Trie {
private:
	vector<Trie*> children;
	bool isEnd;

	Trie* search_prefix(string prefix) {
		Trie *node = this;
		for (char ch : prefix) {
			ch -= 'a';
			if (node->children[ch] == nullptr) {
				return nullptr;
			}
			node = node->children[ch];
		}
		return node;
	}
public:
	Trie() : children(26), isEnd(false) {}

	void insert(string word) {
		Trie *node = this;
		for (char ch : word) {
			ch -= 'a';
			if (node->children[ch] == nullptr) {
				node->children[ch] = new Trie();
			}
			node = node->children[ch];
		}
		node->isEnd = True;
	}

	bool search(string word) {
		Trie *node = this->search_prefix(word);
		return node != nullptr && node->isEnd;
	}

	bool start_with(string prefix) {
		return this->search_prefix(prefix) != nullptr;
	}
};
int main() {
	return 0;
}

