#include <iostream>
#include <cstring>
using namespace std;

class A {
public:
	int var;
	A(int tmp){
		var = tmp;
		cout << "invoke the constructor" << endl;
	}
};

int main() {
	// A ex = 10; // 发生了隐式转换
	A ex(0);
	ex = 10;
	return 0;
}

