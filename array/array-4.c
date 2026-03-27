#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f3();
void arrPrint(int k[2][3]);
void f1() //함수 f1 생성 //호출해야만 함
{

	int a[2][3] = { {4,5,6}, {7,8,9} }; //배열이름[배열의 개수][각 배열의 저장공간의 개수]
	/*a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;*/


	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("========================\n");
}

void f2() {

	int b[1][3]; //2행 3열
	int totalsize = sizeof(b); //24바이트
	printf("%d\n", totalsize); //배열 b 전체 사이즈 (24바이트)

	int bsize = sizeof(b[0]); //0번째 행의 사이즈

	printf("%d\n", bsize); //12바이트
	printf("%d\n", sizeof(b[0][0])); //0행 0번째 원소의 사이즈
	printf("%d\n", sizeof(b) / sizeof(b[0])); //전체 크기 / 한 행 크기
					//24바이트 / 12바이트 = 2
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //한 행 크기 / 한 원소의 크기
					//24바이트 / 4바이트 = 3
	printf("==========================\n");
}

int main() //main함수 1개, 처음 시작할 때 main부터 시작
{
	
	//f1(); //함수는 ()소괄호가 있어야 함.

	//f2(); 

	f3(); //함수호출

	return 0;
}

void f3() {

	int a[1][3] = { {1,2,3}, {4,5,6} };
	//a[0][0]=1 [0][1]=2 [0][2]=3 [1][0]=4 [1][1]=5 [1][2]=5
	// // 배열 초기화, 1,2,3,4,5,6
	arrPrint(a); //인수 보내면서 함수 호출, a배열을 arrPrint함수를 호출할 때 같이 보냄
	int b[2][3] = { {1}, {4} }; //1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1, 2} }; // 1 2 0 0 0 0
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6}; //
	arrPrint(d);
	int e[2][3] = { 1, 2, 3, 4 }; //1 2 3 4 0 0
	arrPrint(e);
	int f[2][3] = { 1, 2 }; //1 2 0 0 0 0 
	arrPrint(f);
	int g[2][3] = { 0 }; //0 0 0 0 0 0
	arrPrint(g);
}

void arrPrint(int k[2][3]) //k를 매개변수 인수와 유형, 개수 동일
{

	for (int i = 0; i <= 1; i++) //0~1행
	{

		for (int j = 0; j < 3; j++) //0~2열
		{

			printf("%2d", k[i][j]);
		}
		printf("\n");
	}
}
