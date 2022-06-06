#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int num1,num2,num3;         //컴퓨터가 선택하는 숫자를 저장할 변수
    int unum1,unum2,unum3;      //사용자가 입력하는 수를 받을 변수
    int strike=0, ball=0;
    int count=1;
    printf("Strat Game!\n");

    srand((int)time(NULL));     //시간을 이용해 난수 시드 생성
    do{                         //반복문
    for(int i=0; i<1;){ 
        num1=rand();            //난수를 생성해 첫 번째 변수에 대입
        if(num1<=9){            //생성된 난수가 9보다 작거나 같은지 검증
            i++;                //참이면 for문 탈출
        }
    }for(int i=0; i<1;){        //동일
        num2=rand();
        if(num2<=9){
            i++;
        }
    }for(int i=0; i<1;){
        num3=rand();
        if(num3<=9){
            i++;
        }
    }
    }while(num1==num2 || num2==num3 || num3==num2);     //난수 세 개 중 서로 같은 것이 한 쌍이라도 있으면 반복;모두 다르면 탈출

    do{
    printf("3 개의 숫자 선택: ");
    scanf("%d %d %d",&unum1, &unum2,&unum3);   //사용자로부터 세 개의 숫자를 입력받는다.

    if(unum1==num2)     //사용자의 입력 값과 컴퓨터가 정한 숫자 중에 자리는 일치하지 않지만 숫자는 일치하는 것을 찾아낸다.
        ball++;         //숫자가 일치하면 ball변수의 값을 1 증가.
    if(unum1==num3)
        ball++;
    if(unum2==num1)
        ball++;
    if(unum2==num3)
        ball++;
    if(unum3==num1)
        ball++;
    if(unum3==num2)
        ball++;

    if(unum1==num1){        //사용자의 입력 값과 컴퓨터가 정한 숫자 중에 숫자와 자리 모두 일치하는 것을 찾아낸다.
        strike++;           //숫자와 자리가 일치하면 strike변수의 값을 1증가.
    }
    if(unum2==num2){
        strike++;
    }
    if(unum3==num3){
        strike++;
    }
    
    printf("%d번째 도전 결과: %dstrike, %dball!!\n",count, strike, ball);
    count++;                //결과를 출력한 뒤 도전 횟수를 세는 변수 count의 값을 1 증가
    if(strike==3){          //만약 strike값이 3이면; 컴퓨터가 정한 숫자와 사용자가 입력한 숫자가 완벽히 일치하면 반복문 탈출
        break;
    }
    
    strike=0;           //다음 시도의 결과를 받기 위해 다시 0값을 대입
    ball=0;             //동일
    
    
    }while(strike<3);   //사용자로부터 입력을 받고 숫자를 비교하여 결과를 출력하는 반복문은 strike값이 3보다 작은 동안 실행된다.
    printf("Game Over!\n"); //strike값이 3이 되어 반복문을 탈출하게 되면 출력된다.

    return 0;
}