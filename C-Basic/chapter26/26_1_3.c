#include <stdio.h>
#define MAX(a,b) ((a>b) ? a : b)

int main(void) {
    printf("2와 6 중 더 큰 값: %d",MAX(6,2));
    return 0;
}