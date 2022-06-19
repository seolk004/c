#include <stdio.h>

void RemoveBSN(char str[]){         //개행을 없애는 함수
    int len = strlen(str);
    str[len-1]=0;
}

int main(void){
    char str1[20];
    char str2[20];
    char str3[40];

    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);

    RemoveBSN(str1);                //str1의 문자열 끝 개행을 없앤다.

    strcpy(str3,str1);              //str1을 str3으로 복사
    strcat(str3,str2);              //str2를 str3뒤에 덧붙이기

    printf("%s", str3);

    return 0;
}