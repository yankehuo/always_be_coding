#include <bits/stdc++.h>
using namespace std;

vector<int> printMatrix(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = row ? matrix[0].size() : 0;
    vector<int> res;
    int up = 0, down = row - 1, left = 0, right = col - 1;
    // int i = 0, j = 0;
    while (1) {
        for (int i = left; i <= right; ++i)
            res.push_back(matrix[up][i]);
        if (++up > down) break;

        for (int i = up; i <= down; ++i)
            res.push_back(matrix[i][right]);
        if (--right < left) break;

        for (int i = right; i >= left; --i)
            res.push_back(matrix[down][i]);
        if (--down < up) break;

        for (int i = down; i >= up; --i)
            res.push_back(matrix[i][left]);
        if (++left > right) break;
    }
    return res;
}


int main()  {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8 ,9}};
    vector<int> res = printMatrix(matrix);
    for (int i = 0; i < res.size(); ++i)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}