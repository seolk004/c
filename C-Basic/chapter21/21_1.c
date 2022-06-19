#include <stdio.h>

int main(void){
    int ch;

    while(1){
        ch = getchar();

        if(ch>=65 && ch<=90){           //대문자에 해당할 경우
            putchar(ch+32);             //소문자로 출력
            break;              
        }else if(ch>=97 && ch<=122){    //소문자에 해당할 경우
            putchar(ch-32);             //대문자로 출력
            break;
        }else{
            printf("알파벳 문자를 입력하십시오.\n");
        }
    }
    return 0;
}