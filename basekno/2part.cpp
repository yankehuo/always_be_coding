#include <bits/stdc++.h>
using namespace std;

bool check(int x) { }
int binary_search1(int left, int right) {
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (check(mid))
            right = mid;
        else 
            left = mid + 1;
    }
    return left;
}

int binary_search2(int left, int right) {
    while (left < right) {
        int mid = left + (right - left + 1) / 2;
        if (check(mid))
            left = mid;
        else 
            right = mid - 1;
    }
    return left;
}

double binary_search3(double left, double right) {
    const double eps = 1e-6;
    while (right - left > eps) {
        double mid = (left + right) / 2;
        if (check(mid))
            right = mid;
        else
            left = mid;
    }
    return left;
}