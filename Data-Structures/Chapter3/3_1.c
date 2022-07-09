#include <stdio.h>
#include "ArrayList.h"

int main(void){
    List list;
    int data=0;
    int sum=0;
    ListInit(&list);

    for(int i=1; i<=9; i++){
        LInsert(&list, i);      //리스트에 데이터 삽입 1부터 9까지
    }

    if(LFirst(&list, &data)){           //첫번째 인덱스에 데이터가 있을 경우
        sum = LFirst(&list, &data);     //sum에 대입
        while(LNext(&list, &data));{        //두 번째 이후 인덱스에 데이터가 있는 동안
            sum += LNext(&list, &data);     //sum에 더할 것
        }
    }
    printf("데이터의 합 : %d \n", sum);

     if(LFirst(&list, &data)){          //첫 번째 인덱스에 데이터가 있을 경우
        if(data%2==0 || data%3==0){     //그 데이터가 2의 배수거나 3의 배수라면
            LRemove(&list);             //해당 데이터 삭제
        }
        while(LNext(&list, &data));{        //두 번째 이후 데이터가 있는동안    
            if(data%2==0 || data%3==0){     //데이터가 2또는 3의 배수인경우
                LRemove(&list);             //해당 데이터 삭제
            }
        }
    }
    if(LFirst(&list, &data)){               //첫 번째 인덱스에 데이터가 있는 경우
        printf("%d ", data);                //출력
        while(LNext(&list, &data));{        //두번째 이후도
            printf("%d ", data);            //출력
        }
    }

    return 0;
}