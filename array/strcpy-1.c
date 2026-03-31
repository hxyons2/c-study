#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // #include = 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 사용을 위한 헤더파일

int main() 
{
	char a[10] = "Hello"; //h-a[0]
						  //선언과 동시에 초기값 부여

		printf("%s\n", a);
		printf("%c\n", a[0]);

	char b[10];
	/*b = "love";*/ //오류: 선언 후 문자열에 한 번에 초기값 부여 불가
	
	strcpy(b, "love"); //문자열 복사(대상, 문자열)

	/*b[0] = 'l';
	b[1] = 'o';
	b[2] = 'v';
	b[3] = 'e';*/ //선언하고 나서 문자 하나하나에 초기값 부여

	printf("%s\n", b);
	/*strcpy: 문자배열을 선언 이후 뒤에 초기화 불가
			  이후 문자열 복사할 때*/



	return 0;
}