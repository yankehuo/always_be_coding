#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool canReach(vector<int> &arr, int start) {
		int len = arr.size();
		vector<bool> visited(len, false);
		return dfs(arr, start, visited);
	}
private:
	bool dfs(vector<int> &arr, int start, vector<bool> &visited) {
		if (start < 0 || start >= arr.size())
			return false;
		if (arr[start] == 0)
			return true;
		if (visited[start])
			return false;
		visited[start] = true;
		int pos1 = start - arr[start];
		int pos2 = start + arr[start];
		return dfs(arr, pos1, visited) || dfs(arr, pos2, visited);
	}
	bool bfs(vector<int> &arr, int start) {
		int len = arr.size();
		deque<int> que;
		que.push_back(start);
		vector<int> visited(len, false);
		while (!que.empty()) {
			int sz = que.size();
			for (int i = 0; i < sz; ++i) {
				int curpos = que.front();
				que.pop_front();
				if (arr[curpos] == 0)
					return true;
				visited[curpos] = true;
				int pos1 = curpos + arr[curpos];
				int pos2 = curpos - arr[curpos];
				if (pos1 >= 0 && pos1 < len && !visited[pos1]) {
					que.push_back(pos1);
				}
				if (pos2 >= 0 && pos2 < len && !visited[pos2]) {
					que.push_back(pos2);
				}
			}
		}
		return false;

	}
};
int main() {
	return 0;
}
