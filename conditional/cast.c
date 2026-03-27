#include <stdio.h>

int main() {

	int a;
	a = sizeof(int) + sizeof(char);
	
	printf("%d", a);

	int a = 7 + 6;
	int b = (int)7.3 + (int)6.7; //형변환 시 앞에 원하는 형태를 씀. 문제는, 변환 시 반올림 없이 자름.

	printf("%d %d", a, b);

	float t;
	t = 10 / 3;
	printf("%f", t);

	t = (float)10 / 3;
	printf("%f", t)

	return 0;
}

