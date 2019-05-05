#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {

    char exp[1000];
    memset(exp, 0, sizeof(exp));   // 특정 주소지에 있는 값을 0으로 초기화
    printf("Hello, World!\n");

    if(argc == 2){
        strcpy(exp, argv[1]);
        printf("argc : %s\n",exp);
    }
    return 0;
}