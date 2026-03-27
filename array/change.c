#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int p, m;
	int change;
	int c5000, c1000, c100;

	printf("물건의 가격은 얼마입니까?: ");
	scanf_s("%d", &p); //물건 값을 입력받는다.

	printf("투입 금액: "); 
	scanf_s("%d", &m);

	change = m - p; //거스름돈을 change에 저장

	c5000 = change / 5000; //남은 잔돈에서 5000원 권 개수 계산
	change = change % 5000; //나머지 연산자를 사용하여 남은 잔돈

	c1000 = change / 1000; //남은 잔돈에서 1000원 권 개수 계산
	change = change % 1000; //

	c100 = change / 100;
	change = change % 100;

	printf("5000원 권: %d개\n", c5000);
	printf("1000원 권: %d개\n", c1000);
	printf("100원 권: %d개\n", c100);
	printf("남은 돈: %d개\n", change);

	return 0;
}

