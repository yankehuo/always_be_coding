#include <bits/stdc++.h>
using namespace std;
vector<string> permutation(string s) {
	len = s.size();
	vector<string> res;
	string path;
	sort(s.begin(), s.end());
	visited.resize(len);
	dfs(res, path, s, 0);
	return res;
}

int len = 0;
vector<bool> visited;
void dfs(vector<string> &res, string &path, string &s, int start) {
	if (start >= len) {
		res.push_back(path);
		return;
	}
	for (int i = 0; i < len; ++i) {
		if (visited[i] || (i > 0 && !visited[i - 1] && s[i] == s[i - 1]))
			continue;
		visited[i] = true;
		// path += s[i];
		path.push_back(s[i]);
		dfs(res, path, s, start + 1);
		path.pop_back();
		visited[i] = false;
	}
}

int main() {

	return 0;
}
