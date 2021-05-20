#include <bits/stdc++.h>
using namespace std;
class Skiplist {
public:
	struct Node {
		int val;
		vector<Node*> level;
		Node(int num, int maxlevel) : val(num), level(maxlevel) {}
	};
private:
	Node head_;
	int maxlevel_;
public:
	// search
	// add
	// erase

};
int main() {
	return 0;
}
