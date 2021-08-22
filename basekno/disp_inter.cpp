#include <bits/stdc++.h>
using namespace std;

vector<int> alls; // 存储待离散化的值
sort(alls.begn(), alls.end());
alls.erase(unique(alls.begin(), alls.end()), alls.end()); // 去掉重复元素

// find -->
int find(int x) {
    int left = 0, right = alls.size() - 1;
    while (left < right) {
        int mid = left + right >> 1;
        if (alls[mid] >= x) right = mid;
        else left = mid + 1;
    }
    return left; // 映射到0，1，2
}

// 区间合并
using PII = pair<int, int>;
void merge(vector<PII> &segs) {
    vector<PII> res;
    sort(segs.begin(), segs.end());
    int start = -2e9, end = -2e9;
    for (auto seg : segs) {
        if (end < seg.first) {
            if (start != -2e9) res.push_back({start, end});
            start = seg.first, end = seg.second;
        }
        else {
            end = max(end, seg.second);
        }
    }
    if (start != -2e9)
        res.push_back({start, end});
    segs = res;
}
