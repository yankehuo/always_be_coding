#include <bits/stdc++.h>
using namespace std;
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
			if (root->next[1 - val]) {
				res |= 1 << i;
				val = 1 - val;
			}
			root = root->next[val];
		}
		return res;
	}
};

class Solution {
public:
	vector<int> maximizeXor(vector<int> &nums, vector<vector<int>> &queries) {
		sort(nums.begin(), nums.end());
		for (int i = 0; i != queries.size(); ++i) {
			queries[i].push_back(i);
		}
		sort(queries.begin(), queries.end(), 
			[](const vector<int> &query1, const vector<int> &query2) {
				return query1[1] < query2[1];
			});
		vector<int> res(queries.size());

		Trie *t = new Trie();
		int idx = 0, n = nums.size();
		for (const auto &q : queries) {
			int x = q[0], limit = q[1], qid = q[2];
			while (idx < n && nums[idx] <= limit)
				t->insert(nums[idx++]);
			if (idx == 0) {
				res[qid] = -1;
			}
			else {
				res[qid] = t->getMaxXor(x);
			}
		}
		return res;
	}
};

int main() {
	return 0;
}
