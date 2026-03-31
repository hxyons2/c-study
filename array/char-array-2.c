#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>

int main(void)
{
    int i,j;
    char fruits[3][20] = { 
        "init", 
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 3; i++) {
        printf("좋아하는 과일을 입력하세요.: ");
        scanf("%s", &fruits);
        
        while (fruits[i] != '\0') {
            j++;
        }
        printf("%d 번째 과일 이름은: %s 몇글자입니다.: ", i, fruits[j]);
    }

    return 0;
} 