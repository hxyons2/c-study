#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 

int main() 
{
	char a[30];
	char b[30];

	int res;

	printf("첫 번째 단어를 입력하시오.: ");
	scanf("%s", a); //문자열이 주소 자체이기 때문에 주소 찾는 부호(&)를 안 넣어도 됨
					//배열명은 배열의 첫 주소
					//전체를 받을 땐 & 미사용, 배열의 요소를 받을 땐 & 사용 -> &a[3]
	printf("두 번째 단어를 입력하시오.: ");
	scanf("%s", b);

	res = strcmp(a, b); //문자열 비교
	//res는 0, 음수, 나머지 양수

	if (res < 0) //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
		printf("%s가 %s보다 앞에 있음.\n", a, b);

	else if (res == 0) //반환값이 0이면 완전히 같음
		printf("%s와 %s가 같음.\n", a, b);

	else //양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
		printf("%s가 %s보다 뒤에 있음.\n", a, b); 


	return 0;
}
