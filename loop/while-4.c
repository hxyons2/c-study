#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int u, t;
	for (u = 1;u <= 3;u++) {

		for (t = 1;t <= 3;t++)

			printf("%d	%d\n", u, t);
	}

	//int u = 1;
	//int t = 1;

	//while (u <= 3) {

	//	while (t <= 3) { //u가 반복완료 되면 t가 증가
	//		printf("u=%d t=%d\n", u, t);
	//		t++;

	//	}
	//	u++;
	//	t = 1;
	//}

	return 0;
}