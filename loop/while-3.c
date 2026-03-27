#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	int y = 1;
	printf("출력하고 싶은 단은?: ");
	scanf("%d", &n);

	while (y <= 9) {
		printf("%d x %d = %d\n", n, y, n*y);
		y++;
	}

	return 0;
}