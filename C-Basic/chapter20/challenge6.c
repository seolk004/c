#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int com[3];     //컴퓨터가 선택하는 숫자를 저장할 변수
    int user[3];    //사용자가 입력하는 수를 받을 변수
    int strike=0, ball=0;
    int count=1;

    printf("Strat Game!\n");

    srand((int)time(NULL));     //시간을 이용해 난수 시드 생성
    do{
        for(int i=0 ; i<3; i++){
            com[i]=rand()%9; 
        }
    }while(com[0]==com[1] || com[1]==com[2] || com[1]==com[3]);  

    do{
    printf("3 개의 숫자 선택: ");

    for(int i=0; i<3; i++){
        scanf("%d",&user[i]); 
    }
   
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(user[i]==com[j]){
                if(i==j){
                    strike++;
                }else{
                    ball++;
                }
            }
        }
    }
    
    printf("%d번째 도전 결과: %dstrike, %dball!!\n",count, strike, ball);
    count++;   
    
    if(strike==3){
        break;
    }
    strike=0;           //다음 시도의 결과를 받기 위해 다시 0값을 대입
    ball=0;             //동일
    
    }while(1); 
    printf("Game Over!\n"); //strike값이 3이 되어 반복문을 탈출하게 되면 출력된다.

    return 0;
}