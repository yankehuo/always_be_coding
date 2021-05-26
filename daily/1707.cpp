#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> maximizeZor(vector<int> &nums, vector<vector<int>> &queries) {
		sort(nums.begin(), nums.end());
		for (int i = 0; i != queries.size(); ++i) {
			queries[i].push_back(i);
		}
		sort(queries.begin(), queries.end(), 
				[](const vector<int> &query1, const vector<int> &query2) {
				return query1[1] < query2[1];
				});
	}
};
class Trie {
private:
	Trie *next[2] = {nullptr};
	const int L = 30;
public:
	Trie() {}
	~Trie() {
		delete this->next[0];
		delete this->next[1];
	}

	void insert(int num) {
		Trie *root = this;
		for (int i = L - 1; i >= 0; --i) {
			int val = (num >> i) & 1;
			if (!root->next[val]) {
				root->next[val] = new Trie();
			}
			root = root->next[val];
		}
	}
	int getMaxXor(int num) {
		Trie *root = this;
		int res = 0;
		for (int i = L - 1; i >= 0; --i) {
			int val = (num >> i) & 1;
			if (root->next[val]) {
				res |= 1 << i;
				val = 1 - val;
			}
			root = root->next[val];
		}
		reutrn res;
	}
};
int main() {
	return 0;
}
