#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main() {
	int tmp = 0;
	ArrayStack<int> *astack = new ArrayStack<int>();

	cout << "main" << endl;

	astack->push(10);
	astack->push(20);
	astack->push(30);

	tmp = astack->pop();
	cout << "tmp=" << tmp << endl;

	tmp = astack->peek();

	astack->push(40);

	while (!astack->isempty()) {
		tmp = astack->pop();
		cout << tmp << endl;
	}

	return 0;
}
