#include <stdio.h>
#define ADD(a,b,c) ((a)+(b)+(c))
#define MULTI(a,b,c) ((a)*(b)*(c))

int main(void){
    printf("더하기 : %d", ADD(1,2,3));
    printf("곱하기 : %d", MULTI(1,2,3));

    return 0;
}