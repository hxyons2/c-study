#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int y;
	int r;

	/** 중복 for : 밖의 for 1번 - 안쪽 for 전부 반복**/

	for (y = 1; y <= 12; y+=3) //y는 단 1~12단
		//1줄에 3단이 출력하면 다음줄 4단이 시작되므로  y=y+3으로 증가
	{
		//1줄에 3단이 출력하면 다음줄 4단이 시작되므로 y=y+3으로 증가

		printf("%d단 \t\t%d단 \t\t%d단\n", y, y + 1, y + 2);
		/**제목 3단씩 출력, \t는 탭으로 간격을 줌
		ex) y가 1단 y+1 2단 y+2 3단**/

		for (r = 1; r <= 9; r++)
			//r은 1~9 곱하는 수
		{
			printf("%d X %d = %-3d \t", y, r, y * r); //1*1=1
			printf("%d X %d = %-3d \t", y+1, r, (y+1) * r); //2*2=2
			printf("%d X %d = %-3d \n", y+2, r, (y+2) * r); //3*3=3
			
		} 
		printf("\n"); /**밖에 for 문장이므로
						1~12단의 3단씩 줄바꿈**/
	} 

	return 0;
}