#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main() {
	for (int i = 123; i <= 329; ++i){
		vector<int> set;
		int a = i / 100, b = i / 10 % 10, c = i % 10;
		set.push_back(a);
		set.push_back(b);
		set.push_back(c);
		int j = 2 * i;
		int d = j / 100, e = j / 10 % 10, f = j % 10;
		auto it1 = find(set.begin(), set.end(), d);
		if (it1 != set.end()) {
			//printf("%d\n", *it1);
			continue;
		}
		else
			set.push_back(d);
		auto it2 = find(set.begin(), set.end(), e);
		if (it2 != set.end())
			continue;
		else
			set.push_back(e);
		auto it3 = find(set.begin(), set.end(), f);
		if (it3 != set.end())
			continue;
		else
			set.push_back(f);
		int k = 3 * i;
		int g = k / 100, h = k / 10 % 10, l = k % 10;
		auto it4 = find(set.begin(), set.end(), g);
		if (it4 != set.end())
			continue;
		else
			set.push_back(g);
		auto it5 = find(set.begin(), set.end(), h);
		if (it5 != set.end())
			continue;
		else
			set.push_back(h);
		auto it6 = find(set.begin(), set.end(), l);
		if (it6 != set.end())
			continue;
		else
			set.push_back(l);
		auto it7 = find(set.begin(), set.end(), 0);
		if (it7 != set.end())
			continue;
		printf("%d %d %d\n", i, j, k);
	}
	return 0;
}
