#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;
const int MAXN = 100;
const int MAXM = 100;

typedef pair<int, int> pa;

int N, M;
char maze[MAXN][MAXM];

int sx, sy;
int gx, gy;
int d[MAXN][MAXM];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
	queue<pa> que;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			d[i][j] = INF;
	que.push(pa(sx, sy));
	d[sx][sy] = 0;

	while (que.size()) {
		pa p = que.front();
		que.pop();
		if (p.first == gx && p.second == gy)
			break;

		for (int i = 0; i < 4; ++i) {
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
				que.push(pa(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy];
}

void solve() {
	int res = bfs();
	printf("%d\n", res);
}

void init() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; ++i)
		scanf("%s", maze[i]);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (maze[i][j] == 'S') {
				sx = i, sy = j;
			}
			if (maze[i][j] == 'G') {
				gx = i, gy = j;
			}
			
		}
	}
}

int main() {
#ifdef LOCAL
	freopen("maze.in", "r", stdin);
	freopen("maze.out", "w", stdout);
#endif

	init();
	solve();
	return 0;
}
