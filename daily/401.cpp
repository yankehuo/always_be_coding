#include <bits/stdc++.h>
using namespace std;

vector<string> readBinaryWatch(int turnedOn) {
	vector<string> res;
	for (int i = 0; i < 12; ++i) {
		for (int j = 0; j < 60; ++j) {
			if (count(i) + count(j) == turnedOn) {
				string tmp = to_string(i) + ":" + j <= 9 ? "0" + to_string(j) : to_string(j);
				res.push_back(tmp);
			}
		}
	}
	return res;
}

int count(int n) {
	int cnt = 0;
	while(n > 0) {
		n = n & n-1;
		++cnt;
	}
	return cnt;
}



int main() {
	return 0;
}
