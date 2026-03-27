#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	for (int a = 1; a <= 10; a++) //1~10
	{

		//7의 배수를 만나면 반복문 강제 탈출


		if (a % 7 == 0  && a !=0) //a누적 합계 0+1+3->4
		{
			/*printf("%d\n", a);*/
			//break;

			continue; 
			//continue: 아래문장으로 내려가지 않고 
			//다시 반복문의 조건으로 올라가서 물어보고 반복
		}
		
		printf("%d\n", a); //continue에 의해 7이 됐을 때 prinft문이 생략되어 
		
	}

	return 0;
}