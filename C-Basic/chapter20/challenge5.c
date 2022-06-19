#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int com, user, result;
    int win=0, draw=0, lose=0;
    srand((int)time(NULL));

while(lose<1){
    printf("바위는 1, 가위는 2, 보는 3 : ");
    scanf("%d", &user);
    com=rand()%3+1;

    if(user==1){
        printf("당신은 바위 선택, ");
    }else if(user==2){
        printf("당신은 가위 선택, ");
    }else {
        printf("당신은 보 선택, ");
    }

    if(com==1){
        printf("컴퓨터는 바위 선택, ");
    }else if(com==2){
        printf("컴퓨터는 가위 선택, ");
    }else{
        printf("컴퓨터는 보 선택, ");
    }

    result=user-com;

    if(result==0){
        printf("비겼습니다! \n");
        draw++;
    }else if(result==(-1) || result==2){
        printf("당신이 이겼습니다! \n");
        win++;
    }else if(result==1 || result==(-2)){
        printf("당신이 졌습니다! \n");
        lose++;
    }
}    
    printf("게임의 결과: %d승, %d무\n",win, draw);
    return 0;
}