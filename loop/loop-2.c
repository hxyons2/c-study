#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	/*int n;
	int s = 0;
	int i;

	printf("정수를 입력하세요.: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		s += i;
	}

	printf("합계: %d", s);*/

	//int da; //구구단의 단을 저장할 변수 da 선언
	//int t; //구구단에서 1부터 9까지 곱해질 숫자를 저장할 변수(반복 변수) t 선언

	//printf("원하는 단은? : "); //단 입력문 출력
	//scanf("%d", &da); //입력한 정수를 변수 da에 저장
	//printf("<%d단>\n", da); //입력한 단 화면 출력

	//for (t = 1; t <= 9; t++) //t를 1부터 시작해 9까지 1씩 증가시키는 반복문(실행)
	//{

	//	printf("%d * %d = %d\n", da, t, da * t); //입력한 단(da)과 반복 변수(t)를 곱해 구구단 한 줄 출력
	//}

	/*int y;
	int r; */

	for (int y = 1; y <= 9; y++) //y는 단 2~9
		//y는 r이 다 반복이 끝나면(9번) 그때 y하나 증가
	{ 

		printf("<%d단>\n", y);

		for (int r = 1; r <= 9; r++) //곱하는 1~9 반복
		{
			printf("%d * %d = %3d \n", y, r, y * r);
			/** 3d -> 3자리
			원래는 오른쪽 정렬, -을 붙이면 왼쪽정렬**/
		} //r for 끝

		printf("\n");
	} //y for 끝

	return 0; //프로그램 종료
} //main 끝