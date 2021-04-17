#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	string fresort(string s) {
		// sort by freq
		string res;
		std::unordered_map<char, int> mp;
		for (const auto& c : s) {
			++mp[c];
		}
		vector<pair<char, int>> v;
		for (const auto& p : mp) {
			v.push_back(p);
		}
		std::sort(v.begin(), v.end(), [](const pair<char, int> &a, const pair<char, int> &b) { 
				return a.second > b.second || (a.second == b.second) && a.first > b.first; 
		});

		for (const auto& e : v) {
			res += string(e.second, e.first);
		}
		return res;
	}
};

int main() {
	return 0;
}
