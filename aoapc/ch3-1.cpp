#include <cstdio>
#include <cstring>

int main() {
	int flag = 1;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '"') {
			if (flag) {
				printf("``");
			}
			else {
				printf("''");
			}
			flag = !flag;
		}
		else {
			printf("%c", c);
		}
	}
	return 0;
}
