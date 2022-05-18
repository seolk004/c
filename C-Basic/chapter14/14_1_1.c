#include <stdio.h>
int SquareByValue(int num){
    return (num*num);
}
void SquareByReference(int* num){
    *num *= *num;
}
int main(void){
    int num=3;
    SquareByValue(num);
    printf("%d\n", num);
    SquareByReference(&num);
    printf("%d\n", num);

    return 0;
}