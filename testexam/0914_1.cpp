#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> getQue(vector<vector<int>> &people) {
    std::sort(people.begin(), people.end(), [](vector<int> &a, vector<int> &b) { 
        return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
    });
    vector<vector<int>> que;
    for (auto &per : people) {
        int position = per[1];
        que.insert(que.begin() + position, per);
    }
    return que;
}

int main() {


    return 0;
}


