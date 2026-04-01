#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 10, b = 20;
	int max;

	//여기서부터
	max = (a > b) ? a : b;

	printf("큰 값: %d\n", max);
	//여기까지 수정답안

	return 0;
}
