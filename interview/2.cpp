#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> GetPoint(string order) {
		int len = order.size();
		int i = 0;
		for (; i < len; ) {
			parse(order, i);
		}
		int x = 0, y = 0;
		for (const auto &p : freq) {
			if (p.first == 'A') x -= p.second;
			if (p.first == 'D') x += p.second;
			if (p.first == 'W') y += p.second;
			if (p.first == 'S') y -= p.second;
		}
		return {x, y};
	}
private:
	unordered_map<char, int> freq;
	void parse(string &order, int &i) {
		if (i == order.size())
			return;
		if (isalpha(order[i])) {
			++freq[order[i]];
			++i;
		}
		else {
			int num = 0;
			while (isdigit(order[i])) {
				num = num * 10 + order[i] - '0';
				++i;

			}
			if (isalpha(order[i])) {
				freq[order[i]] += num;
				++i;
			}
		}
	}
};

int main() {
	string s = "2W2D";
	Solution sq;
	vector<int> res = sq.GetPoint(s);
	cout << res[0] << " " << res[1];
	return 0;
}
