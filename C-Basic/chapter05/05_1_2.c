#include <stdio.h>
int main(void){
    double dbl_1, dbl_2;
    printf("두 개의 실수를 입력하시오.\n");
    scanf("%lf %lf",&dbl_1, &dbl_2);
    printf("%lf + %lf=%lf\n",dbl_1, dbl_2, (dbl_1+dbl_2));
    printf("%lf - %lf=%lf\n",dbl_1, dbl_2, (dbl_1-dbl_2));
    printf("%lf X %lf=%lf\n",dbl_1, dbl_2, (dbl_1*dbl_2));
    printf("%lf / %lf=%lf\n",dbl_1, dbl_2, (dbl_1/dbl_2));
    return 0;
}