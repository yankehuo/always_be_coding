#include <cstdio>
int main() {
	double i;
	const int efs = 0.0000001;
	// != difference
	//for (i = 0; i != 10; i += 0.1)
	for (i = 0; i - 10.0 < efs; i += 0.1)
		// .2lf
		printf("%.2lf\n", i);
	return 0;
}
