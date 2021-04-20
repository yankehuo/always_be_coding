#include <iostream>
#include <queue>
using namespace std;

int main() {
	int tmp = 0;
	queue<int> iqueue;

	iqueue.push(10);
	iqueue.push(20);
	iqueue.push(30);

	iqueue.pop();

	tmp = iqueue.front();
	cout << "tmp=" << tmp << endl;

	iqueue.push(40);

	cout << "empty()=" << iqueue.empty() << endl;
	cout << "size()=" << iqueue.size() << endl;

	while (!iqueue.empty()) {
		tmp = iqueue.front();
		cout << tmp << endl;
		iqueue.pop();
	}

	return 0;
}
