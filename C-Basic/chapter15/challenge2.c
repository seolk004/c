#include <stdio.h>
int main(void){
    int num=0;
    int arr[8];
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
    if(num!=0){
        for(int i=0;i<9;i++){
            arr[i]=num%2;
            num=num/2;
        }
    }
    for(int i=7; i>=0; i--){
    printf("%d",arr[i]);
    }
    return 0;
}