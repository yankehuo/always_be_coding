#include <bits/stdc++.h>
using namespace std;
class ThroneInheritance {
public:
	ThroneInheritance(string kingName) : king(kingName) {
	}

	void birth(string parentName, string childName) {
		node[parentName].push_back(childName);
	}

	void death(string name) {
		dead.insert(name);
	}

	vector<string> getInheritanceOrder() {
		vector<string> res;
		// preorder
		std::function<void(string &)> preorder = [&](string &name) {
			if (!dead.count(name)) {
				res.push_back(name);
			}
			if (node.count(name)) {
				for (string na : node[name]) {
					preorder(na);
				}
			}
		};

		preorder(king);
		return res;
	}
private:
	unordered_map<string, vector<string>> node;
	unordered_set<string> dead;
	string king;
};

int main() {
	return 0;
}
