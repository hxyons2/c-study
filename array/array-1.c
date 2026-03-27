#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int ap[5] = { 10, 20, 30, 40, 50 }; //명시적 배열
	int ap2[] = { 10, 20, 30 }; //묵시적 배열, 초기값 3개 []->3 생략
	printf("%d\n", ap[2]); //ap의 2번째 방의 값 출력 -> 30 출력(0,1,2)

	int ap3[5] = { 1, 2 }; //1,2,0,0,0
	int ap4[5] = { 4 }; //4,0,0,0,0
	int ap5[5] = { 0 }; //0,0,0,0,0

	int ap6[5];
	ap6[0] = 100;
	ap6[1] = 200;
	ap6[2] = 300;
	ap6[3] = 400;
	ap6[4] = 500;

	/*printf("%d\n", ap6[0]);
	printf("%d\n", ap6[1]);
	printf("%d\n", ap6[2]);
	printf("%d\n", ap6[3]);
	printf("%d\n", ap6[4]);*/

	for (int i = 0; i < 5; i++) 
	{
		printf("%d\n", ap6[i]);
	}

	return 0;
}