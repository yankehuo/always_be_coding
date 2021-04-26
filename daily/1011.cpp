#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int ship(vector<int> &weights, int D) {
		int left = *max_element(weights.begin(), weights.end());
		int right = accumulate(weights.begin(), weights.end(), 0);
		while (left < right) {
			int mid = left + (right - left) / 2;
			int need = 1, cursum = 0;
			for (const auto &weight : weights) {
				cursum += weight;
				if (cursum > mid) {
					++need;
					cursum = weight;
				}
			}
			if (need > D) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		return left;
	}
};
void trimleftspaces(string &input) {
	input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
				return !isspace(ch);
				}));
}
void trimrightspaces(string &input) {
	input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
				return !isspace(ch);
				}).base(), input.end());
}
vector<int> stringtointv(string input) {
	vector<int> output;
	trimleftspaces(input);
	trimrightspaces(input);
	input = input.substr(1, input.size() - 2);
	stringstream ss;
	ss.str(input);
	string item;
	char delim = ',';
	while (getline(ss, item, delim)) {
		output.push_back(stoi(item));
	}
	return output;
}
int stringtoint(string input) {
	return stoi(input);
}
int main() {
	string line;
	while (getline(cin, line)) {
		vector<int> weights = stringtointv(line);
		getline(cin, line);
		int D = stringtoint(line);
		int res = Solution().ship(weights, D);
		string out = to_string(res);
		cout << out << endl;
	}
	return 0;
}
