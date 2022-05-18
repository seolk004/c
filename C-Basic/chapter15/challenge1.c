#include <stdio.h>
void odd(int arr[]){
    printf("홀수 : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2==1){
            printf("%d  ", arr[i]);
        }
    }
    printf("\n");
}
void even(int arr[]){
    printf("짝수 : ");
    for(int i=0; i<10; i++){
        if(arr[i]%2==0){
            printf("%d  ", arr[i]);
        }
    }
    printf("\n"); 

}
int main(void){
    int arr[10];
    printf("열 개의 정수를 입력하세요.\n");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    odd(arr);
    even(arr);

    return 0;
}
