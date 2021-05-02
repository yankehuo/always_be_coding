#include <bits/stdc++.h>
using namespace std;
class Employee {
public:
	int id;
	int importance;
	vector<int> subordinates;
};
class Solution {
public:
	unordered_map<int, Employee*> mp;

	int getidsum(vector<Employee*> &employees, int id) {
		for (const auto &e : employees) {
			mp[e->id] = e;
		}
		return dfs(id);
	}
private:
	int dfs(int id) {
		Employee *e = mp[id];
		int total = e->importance;
		for (const auto &subid : e->subordinates) {
			total += dfs(subid);
		}
		return total;
	}
};
int main () {
	return 0;
}
