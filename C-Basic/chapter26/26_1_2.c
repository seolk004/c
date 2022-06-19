#include <stdio.h>
#define PI 3.14159
#define AREA(a) ((a)*(a)*PI)

int main(void){
    printf("원의 넓이 : %f", AREA(5));
    return 0;
}