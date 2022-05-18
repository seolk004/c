#include <stdio.h>
void DesSort(int arr[], int len){
    int i, j;
    int temp;

    for(i=0; i<len-1; i++){
        for(j=0; j<(len-i)-1; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(void){
    int arr[7];
    printf("7 개의 정수를 입력하시오.\n");
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    DesSort(arr, sizeof(arr)/sizeof(int));
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}