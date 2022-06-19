#include <stdio.h>

int main(void){
    char num[10];
    int add=0;

    fputs("입력값 : ",stdout);
    fgets(num, sizeof(num), stdin);

    for(int i=0; i<sizeof(num); i++){
        if(num[i]>=48 && num[i]<=57){   //배열의 문자가 아스키코드로 숫자에 해당하면
            add += (num[i]%48);         //48로 나눈 나머지값을 add에 더하기
        }
    }

    printf("%d", add);

    return 0;
}