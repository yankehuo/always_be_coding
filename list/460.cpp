#include <bits/stdc++.h>
using namespace std;
class LFUCache {
public:
	struct LRUNode {
		int freq;
		list<pair<int, int>> vals;
		LRUNode(int f = 0) : freq(f) {}
	};
	using iptr = list<LRUNode>::iterator;
	using jptr = list<pair<int, int>>::iterator;
private:
	list<LRUNode> cache_;
	int capacity_;
	unordered_map<int, pair<iptr, jptr>> kvit_;
public:
	LFUCache(int capacity) : capacity_(capacity) {}

	int get(int key) {
		int val = -1;
		if (kvit_.find(key) != kvit_.end()) {
			kvit_[key] = promote(key);
			val = kvit_[key].second->second;
		}
		return val;
	}
	void put(int key, int value) {
		if (capacity_ <= 0) {
			return;
		}
		if (kvit_.find(key) == kvit_.end()) {
			if (capacity_ == kvit_.size()) {
				evict();
			}
			kvit_[key] = insertkv(key, value);
		}
		else {
			kvit_[key] = promote(key, value);
		}
	}
private:
	pair<iptr, jptr> promote(int key, int val = -1) {
		iptr i; 
		jptr j;
		std::tie(i, j) = kvit_[key];
		iptr k = next(i);

		if (val < 0)
			val = j->second;
		int freq = i->freq + 1;

		i->vals.erase(j);
		if (i->vals.empty())
			cache_.erase(i);

		if (k == cache_.end() || k->freq != freq) {
			i = cache_.insert(k, LRUNode(freq));
		}
		else {
			i = k;
		}
		j = i->vals.insert(i->vals.end(), {key, val});
		return {i, j};
	}

	void evict() {
		iptr i = cache_.begin();
		jptr j = i->vals.begin();
		kvit_.erase(j->first);
		i->vals.erase(j);
		if (i->vals.empty()) {
			cache_.erase(i);
		}
	}

	pair<iptr, jptr> insertkv(int key, int value) {
		iptr i = cache_.begin();
		if (i->freq != 1) {
			i = cache_.insert(i, LRUNode(1));
		}
		jptr j = i->vals.insert(i->vals.end(), {key, value});
		return {i, j};
	}
};
int main() {
	return 0;
}
