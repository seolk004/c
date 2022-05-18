#include <stdio.h>

int main(void){
    int num=0;
    int rvs=0;
    scanf("%d", &num);

    rvs=(~num+1);
    printf("%d\n",rvs);

    return 0;
}
