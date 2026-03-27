#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//82p 2번

//1부터 100까지 숫자 중 3과 7의 공배수를 출력
int main(void) {
	int i, cnt = 0; //반복문에 사용할 변수

	for (i = 1; i <= 100; i++) //1~100 반복
	{
		if (i % 3 == 0 && i % 7 == 0) //i가 3으로도 나누어지고, 7로도 나누어지면 (공배수)
		{
			printf("%d*", i); //해당 숫자 출력 (* 붙여서 구분)
		}
	}

	return 0;
 }

//83p 11번
int main(void) {

	int i;
	for (i = 0; i < 10; i++) //0부터 9까지 반복
	{
		if (i % 3 == 0) //i가 3의 배수이면 (0, 3, 6, 9)
			continue;
		if (i > 5) //i가 5보다 크면 (6 이상)
			break;
		printf("%d ", i); //위 조건에 걸리지 않은 값만 출력
	}

	return 0;
}