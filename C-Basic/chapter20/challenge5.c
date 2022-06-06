#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int user;
    int com;
    int win=0, draw=0, lose=0;                  //반드시 0으로 초기화
    srand((int)time(NULL));                     //난수발생을 위해 현재 시간을 시드로 이용
    do{                                         //최초 한 번 실행 후 while의 조건이 참인 동안 반복. 게임에서 지기 전까지 게임을 반복해서 진행한다.
    printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d",&user);                      //사용자로부터 1,2,3중 하나의 숫자를 입력받음

    for(int i=0; i<1;){                         
    
        com=rand();                             //난수 값을 com변수에 대입
        if(com>0 && com<4){                     //생성된 난수가 0보다 크고 4보다 작은지 검증
            i++;                                //참일 경우 i값이 1증가하며 반복문 탈출
        }
        else continue;                          //난수가 if문의 조건에 해당하지 않을 경우 난수 생성 반복
    }
    
            if(user==1){                        //사용자가 입력한 값이 1일 경우
                switch(com){                    //com의 값으로 분기 명령 실행
                    case 1:                     //com 값이 1일 경우
                        printf("당신은 바위, 컴퓨터는 바위, 비겼습니다!\n");    
                        draw++;                 //draw변수의 값을 1증가
                        break;                  //switch문 탈출
                    case 2:                     //com 값이 2일 경우
                        printf("당신은 바위, 컴퓨터는 가위, 당신이 이겼습니다!\n");
                        win++;                  //win변수의 값을 1증가
                        break;                  //switch문 탈출
                    case 3:                     //com값이 3일 경우
                        printf("당신은 바위, 컴퓨터는 보, 당신이 졌습니다!\n");
                        lose++;                 //lose값을 1증가
                        break;                  //switch문 탈출
                }
            }
            else if(user==2){                   //사용자가 입력한 값이 1이 아니면서 2일 경우
                switch(com){                    //위와 동일
                    case 1:
                        printf("당신은 가위, 컴퓨터는 바위, 당신이 졌습니다!\n");
                        lose++;
                        break;
                    case 2:
                        printf("당신은 가위, 컴퓨터는 가위, 비겼습니다!\n");
                        draw++;
                        break;
                    case 3:
                        printf("당신은 가위, 컴퓨터는 보, 당신이 이겼습니다!\n");
                        win++;
                        break;
                }
            }
            else if(user==3){                   //사용자가 입력한 값이 1이 아니면서 2가 아니면서 3일 경우
                switch(com){                    //위와 동일
                    case 1:
                        printf("당신은 보, 컴퓨터는 바위, 당신이 이겼습니다!\n");
                        win++;
                        break;
                    case 2:
                        printf("당신은 보, 컴퓨터는 가위, 당신이 졌습니다!\n");
                        lose++;
                        break;
                    case 3:
                        printf("당신은 보, 컴퓨터는 보, 비겼습니다!\n");
                        draw++;
                        break;
                }
            }
            if(lose>0){                          //만일 lose값이 0보다 크면;한 번이라도 졌다면
                break;                           //do-while문 탈출
            }
        
    }while(lose<1);                              //while문의 조건은 lose값이 1보다 작은 경우
        
        
    
    printf("게임의 결과: %d승, %d무\n",win, draw);//lose값이 한 번이라도 증가되어 반복문을 탈출하게 되면 게임의 결과를 출력한다.

    return 0;
}