#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit(int n) {
		if (n < 10) return n;
		return (n % 10) + digit(n / 10); //n의 마지막 자릿수(n%10)와 나머지 앞부분 숫자들 n/10의 자릿수 합 digit(n/10)을 더한 값을 반환함.
	}

int main() {
	printf("%d", digit(235));
}
//
//1) digit(235): 235 < 10이 아니므로
//			   (235%10) + digit(235/10) -> 5 + digit(23)
//
//2) digit(23): 23 < 10 이 아니므로
//			  (23%10) + digit(23/10) -> 3 + digit(2)
//
//3) digit(2): 2 < 10 이므로 그대로 2 반환
//			
//이제 아래서부터 값을 계산하면
//digit(2) = 2
//digit(23) = 3 + 2 = 5
//digit(235) = 5 + 5 = 10
//
