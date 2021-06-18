#include <bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int> &flowerbed, int n) {
	// supplement zero
	if (flowerbed.size() == 0)
		return false;
	int countzero = 1;
	int canplace = 0;
	for (int flow : flowerbed) {
		if (flow == 0) {
			++countzero;
		}
		else {
			canplace += (countzero - 1) / 2;
			if (canplace == n)
				return true;
			countzero = 0;
		}
	}
	if (flowerbed[flowerbed.size() - 1] == 0) {
		++countzero;
		canplace += (countzero - 1) / 2;
	}
	return canplace >= n;
}

bool canPlaceFlowers(vector<int> &flowerbed, int n) {
	if (flowerbed.empty())
		return false;
	int canplace = 0;
	for (int i = 0; i < flowerbed.size(); i += 2) {
		if (flowerbed[i] == 0) {
			if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) {
				--n;
			}
			else {
				++i;
			}
		}
	}
	return n <= 0;
}

int main() {
	return 0;
}
