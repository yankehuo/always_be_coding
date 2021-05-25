#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	typedef pair<string, int> PA;
	vector<string> topKFrequent(vector<string> &words, int k) {
		unordered_map<string, int> cnt;
		for (string word : words)
			++cnt[word];

		struct cmp {
			bool operator()(const PA &a, const PA &b) {
				return a.second > b.second || (a.second == b.second && a.first < b.first);
			}
		};
		priority_queue<PA, vector<PA>, cmp> pq;
		for (const auto& it : cnt) {
			pq.push(it);
			if (pq.size() > k) {
				pq.pop();
			}
		}
		vector<string> res(k);
		for (int i = k - 1; i >= 0; --i) {
			res[i] = pq.top().first;
			pq.pop();
		}
		return res;
	}
};

// problem: lambda表达式
class Solution {
public:
	vector<string> getTopK(vector<string> &words, int k) {
		unordered_map<string, int> kv;
		for (auto &word : words)
			++kv[word];
		vector<string> res;
		for (auto &pa : kv) {
			res.push_back(pa.first);
		}
		auto cmp = [&kv](const string &a, const string &b) {return kv[a] > kv[b] || (kv[a] == kv[b] && a < b);};
		nth_element(res.begin(), res.begin() + k, res.end(), 
					[&kv](const string &a, const string &b) {
						return kv[a] > kv[b] || (kv[a] == kv[b] && a < b);
					});
		// std::nth_element(res.begin(), res.begin() + k, res.end(), cmp);
		res.erase(res.begin() + k, res.end());
		// std::nth_element(res.begin(), res.begin() + k, res.end(), [&kv](const string &a, const string &b) {return kv[a] > kv[b] || (kv[a] == kv[b] && a < b);});
				std::sort(res.begin(), res.end(), cmp);
		return res;
	}
};
int main() {
	return 0;
}
