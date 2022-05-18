#include <stdio.h>
#include <string.h>
int main(void){
    char arr[50];
    int length=0;

    printf("문자열 입력 : ");
    scanf("%s", arr);
    length=strlen(arr);

    for(int i=0; i<=(length/2); i++){
        if(arr[i]!=arr[(length-1)-i]){
            printf("회문이 아닙니다.");
            break;
        }
        else{
            if(i==(length/2)){
                printf("회문 입니다.");
                break;
            }
        }
    }
    return 0;
}