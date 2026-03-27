#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; //초기값
	//a[행][열] 0~2향 0~2욜 -> 9개 요소 구성
	int i, j;
	for (i = 0; i < 3; i++) //i 향 의미 0~2
	{

		for (j = 0; j < 3; j++) //열 의미 0~2
			printf("%d\t", a[i][j]); //9번 출력
		/*i = 0 j = 0   1 2
		i = 0 j = 0   1 2
		i = 0 j = 0   1 2*/
		printf("\n");
	}

	int sum = 0;
	int b[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	};

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", b[i][j]);
			sum += b[i][j];
		}
		printf("\n");
	}

	printf("합계: %d\n", sum);

	return 0;
}