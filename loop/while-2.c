#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, cnt = 0, i;

	printf("원하는 배수 입력: ");
	scanf("%d", &i); //i는 원하는 배수의 숫자 //5 //3

	printf("배수의 개수 입력: ");
	scanf("%d", &num); //보여지는 배수의 개수 num=4 입력 //num=5

	while (cnt++ < num 4) /**5일때 탈출 //0 < 5 조건 물어보고 참=>다음문장 가기전에 
						  cnt+ -> cnt 1이 됨**/

		// 0 < 5 조건 물어보고 참 => 다음 문장 가기전에 cnt+1 -> cnt 1이 됨
		// 1 < 5 조건 물어보고 참 => 다음 문장 가기전에 cnt+1 -> cnt 2이 됨
		// 2 < 5 조건 물어보고 참 => 다음 문장 가기전에 cnt+1 -> cnt 3이 됨
		// 3 < 5 조건 물어보고 참 => 다음 문장 가기전에 cnt+1 -> cnt 4가 됨
		// 4 < 5 조건 물어보고 참 => 다음 문장 가기전에 cnt+1 -> cnt 5가 됨
		// 5 < 5 조건 물어보고 거짓 => 탈출

		printf("%d ", i * cnt);
				// 3 * 1









						//5 * 1
						//5 * 2
						//5 * 3
						//5 * 4
	//cnt 0
	//cnt 1
	//cnt 2
	//cnt 3

	return 0;
}