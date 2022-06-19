#include <stdio.h>
#include <stdlib.h>

int main(void){
    int * num =(int *)malloc(sizeof(int));              //int크기만큼 동적할당
    int i=1;

    while(1){        
        printf("정수를 입력하세요(-1은 종료): ");
        scanf("%d", &num[i-1]);                         //입력받은 정수를 동적할당받은 변수에 저장
        if(num[i-1]==(-1)){                             //입력받은 정수가 -1인지 확인
            break;                                      //맞다면 반복문 탈출
        }
        i++;                                            //-1이 아니면 i값을 1 올림. 다음 정수를 입력받을 공간을 만들기 위함
        num=(int*)realloc(num, sizeof(int)*i);          //realloc으로 i*sizeof(int)만큼 영역을 더 할당받음
    }

    for(int j=0; j<i; j++){
        printf("%d ",num[j]);                           //그간 입력받은 정수 출력
    }
    free(num);
    return 0;
}