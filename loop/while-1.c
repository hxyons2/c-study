#include <stdio.h>
int main() {
	//1~5 출력
	int i = 1, sum = 0, sum2 = 0;
	while (i <= 100) { //i<6   
		printf("%d\n", i);
		sum = sum + i; // sum+=i
		if (i % 2 == 0)
			sum2 = sum2 + i;
		i = i + 1; // i+=1 ,i++ 어차피 1씩 증가하기 때문

	}
	printf("%d\n", sum);
	printf("%d\n", sum2);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
		//int a = 2;
		//int sum = 0; // 합계 누적할 변수
		//while (a <= 100)
		//{
		//	//printf("%d\n", a);
		//	sum = sum + a;
		//	a = a + 2; // a += 1;
		//}
		//printf("1~100합은: %d", sum);
		//return 0;

		int num, i = 0;
		printf("양의 정수 입력: ");
		scanf_s("%d", &num);
		while (i < num)
		{
			printf("handaman!\n");
			i++;
		}

	}