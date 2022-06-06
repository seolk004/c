#include <stdio.h>

void SwapIntPtr(int **p1, int **p2){
    int * temp=*p1; //이중포인터 p1이 가리키고있는 공간(싱글포인터)을 temp도 가리키게 함
    *p1=*p2; //이중포인터 p2가 가리키고 있는 공간의 값을 p1에 저장
    *p2=temp; //temp에 저장된 주소값을 p2에 저장
}

int main(void){
    int num1=10, num2=20;
    int *ptr1, *ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

    SwapIntPtr(&ptr1, &ptr2);
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
    return 0;

}