#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N], n, K;
int length[N];
int s[N + 1];
int avg[N];
//int index[N];

using PA = pair<int, pair<int, int>>;

int main() {
	cin >> n >> K;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = i + 2; j <= n; ++j) {
			int tmp = s[j] - s[i - 1], len = j - i;
			if (tmp > avg[i]) {
				avg[i] = tmp / len;
				length[i] = len;
			}
		}
	}

	struct comp {
		bool operator()(PA pa1, PA pa2) {
			return pa1.first < pa2.first || (pa1.first == pa2.first && pa1.second.first < pa2.second.first) || (pa1.first == pa2.first && pa1.second.first == pa2.second.first && pa1.second.second > pa2.second.second);
		}
	};
	priority_queue<PA, vector<PA>, comp> pq;
	for (int i = 1; i <= n; ++i) {
		pq.push({avg[i], {length[i], i}});
	}
	auto p = pq.top();
	int left = p.second.second - 1; 
	int right = left + p.second.first;
	cout << left  << " " << right << endl;;
	

	return 0;
}


#include <bits/stdc++.h>
using namespace std;

string s;
unordered_map<char, int> kv = {
	////////6543210
	{'a', 0b0000000},
	{'0', 0b1110111}, 
	{'1', 0b1000100}, 
	{'2', 0b0111110}, 
	{'3', 0b1101110}, 
	{'4', 0b1001101}, 
	{'5', 0b1101011}, 
	{'6', 0b1111011}, 
	{'7', 0b1000110}, 
	{'8', 0b1111111}, 
	{'9', 0b1101111}, 
};
int getone(int num) {
	int cnt = 0;
	while (num) {
		num = num & (num - 1);
		++cnt;
	}
	return cnt;
}

int main() {
	cin >> s;
	int sz = s.size();
	//vector<int> res;
	int count = 0;
	//string init(sz, 'a');
	for (int len = 1; len <= sz; ++len) {
		string pre(len, 'a');
		count = 0;
		for (int i = 0; i + len - 1 < sz; ++i) {
			int j = i + len - 1;
			for (int k = i; k <= j; ++k) {
				int tmp = kv[s[k]] ^ kv[pre[k]];
				int cnt = getone(tmp);
				count += cnt;
			}
			pre = std::move(s.substr(i, len));
		}
		//res.push_back(count);
		cout << count << " ";
	}


	return 0;
}

















