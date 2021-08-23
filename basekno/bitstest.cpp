#include <bits/stdc++.h>
using namespace std;
// #include <bitset> bitset
int main() {
    std::bitset<8> bs;
    std::bitset<128> bs2;
    std::bitset<64> bs3;
    bs.set();
    bs.flip();
    bs.set(6, 1);
    int i;
    // bs[0] = 1;
    // bs[2] = 1;
    cout << sizeof(bs) << endl;
    cout << sizeof(bs2) << endl;
    cout << sizeof(bs3) << endl;
    cout << sizeof(i) << endl;
    cout << bs.any() << endl;
    cout << bs.none() << endl;
    cout << bs.to_string() << endl;
    cout << bs.count() << endl;
    
    cout << bs.test(2) << endl;
    return 0;
}
