#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <iostream>
using namespace std;

int f1() {
	int n;
	scanf("%d", &n);
	printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);
	return 0;
}


int f2() {
	int n, m;
	scanf("%d", &n);
	m = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
	printf("%03d\n", m);
	return 0;
}


int f3() {
	int a, b, t;
	scanf("%d%d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}

int f4() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d\n", b, a);
	return 0;
}
int f5(){
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		swap(a, b);
	}
	if (a > c) {
		swap(a, c);
	}
	if (b > c) {
		swap(c, b);
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

int main() {
	//f1();
	//f2();
	//f3();
	//f4();
	//f5();
	int a, b;
	// 5
	printf("%f\n", 11111 * 11111);
	printf("%d\n", 11111 * 11111);
	printf("%f\n", 1.0/0.0);
	printf("%d\n", 1.0/0.0);
	printf("%f\n", 0.0/0.0);
	printf("%d\n", 0.0/0.0);
	printf("--------------------\n");
	double i = 1.0, j = 3.0;
	printf("%.20lf\n", i / j);
	printf("--------------------\n");
	printf("%lf\n", DBL_MAX);
	printf("--------------------\n");
	printf("%ld\n", INT_MAX);
	printf("--------------------\n");
	printf("--------------------\n");
	int d = 1, e = 0, f = 0;
	if (d && e || f)
		printf("|| prefer\n");
	else
		printf("&& prefer\n");
	printf("--------------------\n");
	// 6
	//printf("%f\n", 111111 * 111111);
	// 7
	//printf("%f\n", 1111111 * 1111111);
	double a3 = sqrt(-10);
	printf("%f\n", a3);
	printf("%%d\n");
	printf("\\\n");
	scanf("%d%d", &a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
