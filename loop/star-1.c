#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int B;
	int C;
	
	for (B = 5; B >= 1; B--) /*행*/ {
	
		for (C = 1; C <= B; C++) /*열*/ {

			printf("*");

		}

		printf("\n");
	}


	return 0;
}