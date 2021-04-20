#include <iostream>
#include <stack>
using namespace std;

int main() {
	int tmp = 0;
	stack<int> istack;

	istack.push(10);
	istack.push(20);
	istack.push(30);

	istack.pop();

	tmp = istack.top();

	istack.push(40);

	while (!istack.empty()) {
		tmp = istack.top();
		istack.pop();
		cout << tmp << endl;
	}

	return 0;
}
