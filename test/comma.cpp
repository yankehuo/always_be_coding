#include <bits/stdc++.h>
using namespace std;
int main2() {
	vector<string> data;
	string tmp;

	while (getline(cin, tmp, ',')) {
		data.push_back(tmp);
	}
	
	for (string e : data)
		cout << e << " ";
	cout << endl;
	
	return 0;
}

int main() {
	vector<int> data;
	int tmp;

	while (cin >> tmp) {
		data.push_back(tmp);
		if (cin.get() == '\n')
			break;
	}
	
	for (int e : data)
		cout << e << " ";
	cout << endl;
	
	return 0;
}
