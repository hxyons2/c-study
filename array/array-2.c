#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
			//기호상수 5 = STUDENTS 상수는 변하지 않는 수 5에 별명을 붙인게 기호 상수
#define STUDENTS 5

int main(void) {

	int score[STUDENTS]; //5개
	int sum = 0;
	int count = 0;
	float avg;

	for (int i = 0; i <= 4; i++) {
		
		while (1) {
			printf("%d번째 학생 성적: ", i + 1);
			scanf("%d", &score[i]);

			if (score[i] >= 0 && score[i] <= 100) {
				break;
			}

			printf("0~100 사이 값만 입력하세요!\n");
		}
		
		if (score[i] != 0) { // 0이면 미응시
			sum += score[i];
			count++;
		}
	}

	if (count > 0) {
		avg = (float)sum / count;
		printf("성적 합계: %d\n", sum);
		printf("평균 성적: %.2f\n", avg);
	}
	else {
		printf("응시한 학생이 없습니다.\n");
	}


	return 0;
}