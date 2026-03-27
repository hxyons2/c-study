#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	/** 
	int i;
	int s = 0;

	for (i = 1; i <= 10; i += 2) {
		s += i;
	}
	
	printf("홀수의 합: %d\n", s);  **/

	int i = 1;
	int s = 0;

	while (i <= 10) {

		s += i;
		i += 2;
	}
		
	printf("i는 %d, 홀수의 합: %d\n", i, s);


	return 0;
}