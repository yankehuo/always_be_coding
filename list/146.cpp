#include <bits/stdc++.h>
using namespace std;
class LRUCache {
private:
	list<pair<int, int>> cache;
	unordered_map<int, list<pair<int, int>>::iterator> kit;
	int size;
public:
	LRUCache(int capacity) : size(capacity) {}
	int get(int key) {
		if (kit.find(key) == kit.end())
			return -1;
		int value = kit[key]->second;
		// erase iterator in list
		cache.erase(kit[key]);
		cache.push_front({key, value});
		kit[key] = cache.begin();
		return value;
	}
	void put(int key, int value) {
		if (kit.count(key)) {
			cache.erase(kit[key]);
		}
		if (cache.size() >= size) {
			// erase key in unordered_map
			kit.erase(cache.back().first);
			cache.pop_back();
		}
		cache.push_front({key, value});
		kit[key] = cache.begin();
	}
};
int main() {
	return 0;
}
