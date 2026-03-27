#include <stdio.h>

main() {

	int a, b, c;
	a = 5 % 3; //나머지 2
	a--;

	b = (a++) + 3; //B=4

	printf("%d, %d\n", a, b); //a=2
							  //결과: (2,4)
	
	c = (++a) + 3; //c=6 a=3
	printf("%d, %d, %d", a, b, c); ///결과: (3,4,6)


	return 0;
}