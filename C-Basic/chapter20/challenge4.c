#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int dice1;
    int dice2;
    srand((int)time(NULL));         //현재 시간으로 난수 생성의 시드 설정
    for(int i=0; i<1;){             //원하는 난수 값을 얻을 때까지 난수 생성을 반복하기 위함
        dice1=rand();               //난수를 생성해서 dice1,dice2변수에 넣는다.
        dice2=rand();
        if(dice1>0 && dice1<=6 && dice2>0 && dice2<=6){     //변수의 값이 0보다 크면서 6보다 작거나 같으면
        printf("주사위 1의 결과 %d\n",dice1);                //값을 출력한다.
        printf("주사위 2의 결과 %d\n",dice2);
        i++;                                                //원하는 난수 값을 얻었으므로 반복문을 탈출하기 위해 i값을 1더한다.
        }

    }
return 0;
}
