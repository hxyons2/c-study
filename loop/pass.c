#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int pass = 1234; //암호
	int pw = 0;
	/** pw 입력 받아서 pass(암호) 비교
	다르면 계속 반복, 맞을때까지 반복(while)
	맞으면 '로그인 성공' 출력 **/


	while (pass != pw) //반복은 만족할 때, 조건이 만족하지 않을 때 반복문 탈출
	{ 
		printf("암호를 입력하시오.: ");
		scanf("%d", &pw);
	}
	printf("로그인에 성공하였습니다. ");


	return 0;
}

