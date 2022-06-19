#include <stdio.h>
#include <stdlib.h>

int main(void){
    int len;
    char * string;
    char tmp;
    printf("입력할 문자열의 길이 : ");
    scanf("%d", &len);

    string = (char *)malloc(sizeof(char)*len);
    printf("문자열을 입력하시오 : ");
    fgets(string, len, stdin);

    printf("%s", string);

    // for(int i=len; i>=0; i--){
    //     if(*(string+i)==32){
            
    //     }
    // }

    free(string);
    return 0;

}