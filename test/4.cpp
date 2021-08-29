#include <iostream>
#include <string>
using namespace std;
const int n = 100;

int main() {
	string *const p = new string[n];
	string s;
	string *q = p;
	while (cin >> s && q != p + n)
		*q++ = s;
	cout << q;
	const size_t size = q - p;
	delete[] p;
	return 0;
}
