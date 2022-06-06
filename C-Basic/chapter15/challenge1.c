#include <stdio.h>
void odd(int arr[]){                //반환타입 void, 매개변수로 배열을 받는다.
    printf("홀수 : ");              
    for(int i=0; i<10; i++){        //배열 전체에서 홀수를 찾기 위해 배열의 인덱스 값을 바꿔간다.
        if(arr[i]%2==1){            //만약 배열의 요소값을 2로 나눈 나머지 값이 1이면
            printf("%d  ", arr[i]); //홀수로 판단하여 해당 인덱스의 요소 값을 출력한다.
        }
    }
    printf("\n");
}
void even(int arr[]){                //반환타입 void, 매개변수로 배열을 받는다.
    printf("짝수 : ");               
    for(int i=0; i<10; i++){         //배열 전체에서 짝수를 찾기 위해 배열의 인덱스 값을 바꿔간다.
        if(arr[i]%2==0){             //만약 배열의 요소값을 2로 나눈 나머지 값이 0이면
            printf("%d  ", arr[i]);  //짝수로 판단하여 해당 인덱스의 요소 값을 출력한다.
        }
    }
    printf("\n"); 

}
int main(void){
    int arr[10];                                //배열 arr 선언. 크기는 10
    printf("열 개의 정수를 입력하세요.\n");      //정수를 입력받는다.
    for(int i=0;i<10;i++){                      //반복문으로 입력받은 정수를 배열에 차례대로 넣는다.
        scanf("%d", &arr[i]);                   //배열의 시작주소가 아닌 요소값을 쓰므로 &연산자 필요.
    }

    odd(arr);       //홀수를 찾는 함수 odd 호출
    even(arr);      //짝수를 찾는 함수 even 호출

    return 0;
}
