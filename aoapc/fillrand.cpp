#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void fill_random_int(vector<int> &v, int cnt) {
	v.clear();
	for (int i = 0; i < cnt; ++i)
		v.push_back(rand());
}

int main() {
	srand((unsigned)time(NULL));
	vector<int> v;
	fill_random_int(v, 10000);
	for (const auto &num : v)
		cout << num << " ";
	cout << "\n";
	return 0;
}
