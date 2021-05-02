#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int leastbricks(vector<vector<int>> &wall) {
		unordered_map<int, int> freq;
		for (const auto &line : wall) {
			int sum = 0;
			int n = line.size();
			for (int i = 0; i < n - 1; ++i) {
				sum += line[i];
				++freq[sum];
			}
		}
		int maxedge = 0;
		for (const auto &pair : freq) {
			maxedge = std::max(maxedge, pair.second);
		}
		return wall.size() - maxedge;
	}
};
int main() {
	return 0;
}
