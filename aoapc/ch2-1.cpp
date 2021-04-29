#include <stdio.h>
#include <iostream>
using namespace std;
bool is_daffodil(int num) {
	int i = num % 10;
	int j = num / 10 % 10;
	int k = num / 100;
	if (num == i * i * i + j * j * j + k * k * k)
		return true;
	return false;
}

int main() {
	for (int i = 100; i <= 999; ++i) {
		if (is_daffodil(i)) {
			cout << i << ' ';
		}
	}
	cout << endl;
	return 0;
}
