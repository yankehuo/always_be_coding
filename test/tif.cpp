#include <iostream>
#include <vector>
#include <cstdio>
using std::vector;
using std::cin;
using std::cout;

int main() {
	int x;
	scanf("%d", &x);
	if(x == 1) {
		cout << "if 1" << "\n";
	}
	else if (x < 2) {
		cout << "if 2" << "\n";
	}
	return 0;
}
