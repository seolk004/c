#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i;
    int num;
    printf("난수의 범위 : 0부터 99까지 \n");
    for(i=0; i<5;){
        num=rand();         //rand()함수로 생성된 난수를 num변수에 저장
        if(num<100){        //num변수의 값이 100을 넘지 않는지 검사
            printf("난수 출력: %d \n", num);    //100을 넘지 않는다면 출력
            i++;                                //그리고 i값을 증가시킨다. 
            //for문으로 증가시키게 되면 100이 넘는 난수가 생성되었을 경우에도 i값은 증가되지만 출력은 되지 않기 때문에 다섯개의 난수를 출력할 수 없다.
        }
    }
    return 0;

    }