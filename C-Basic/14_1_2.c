#include <stdio.h>
void Swap3(int* num1, int* num2, int* num3){
    int temp = *num1;
    *num1 = *num3;
    *num3 = *num2;
    *num2 = temp;
}
int main(void){
    int num1=5;
    int num2=3;
    int num3=8;

    Swap3(&num1, &num2, &num3);
    printf("%d, %d, %d\n", num1, num2, num3);

    return 0;
}
