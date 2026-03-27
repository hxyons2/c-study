#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	printf("%d\n", answer);
	int guess;
	int try = 0;

//반복구조
	do {
		printf("정답을 추측하여 보시오.: ");
		scanf_s("%d", &guess);
		try++;
		if (guess > answer) //사용자가 입력한 정수가 정답보다 높으면
			printf("입력한 숫자가 정답보다 HIGH(위) \n");
		else if (guess < answer) // 사용자가 입력한 정수가 정답보다 낮으면
			printf("입력한 숫자가 정답보다 LOW(아래) \n");

	} while (guess != answer); //같지 않으면 계속 수행

	printf("축하합니다. 시도횟수 = %d\n", try);
	return 0;

}