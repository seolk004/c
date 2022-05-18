#include <stdio.h>
int main(void){
    int arr[10];
    int arr2[10];
    int front=0;
    int rear=0;
    printf("10 개의 정수를 입력하시오.\n");
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++){
        if(arr[i]%2==1){
            arr2[0+front]=arr[i];
            front++;
        }
        else if(arr[i]%2==0){
            arr2[9-rear]=arr[i];
            rear++;
        }
    }

    printf("배열 요소의 출력 : ");
    for(int i=0; i<10; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}