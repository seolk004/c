#include <stdio.h>
int main(void){
    int num=0;                      //정수 하나를 입력받을 변수 선언
    int arr[8];                     //2진수 값으로 변환한 결과를 저장할 배열 선언
    printf("10진수 정수 입력: ");  
    scanf("%d", &num); 
    if(num!=0){                     //입력받은 정수num이 0이 아니라면
        for(int i=0;i<9;i++){       //값을 저장할 배열의 크기만큼 반복한다.
            arr[i]=num%2;           //입력받은 num값을 2로 나눈 나머지 값을 arr에 차례대로 저장한다.
            num=num/2;              //num값을 나눈 몫은 다시 num값에 저장하여 반복문동안 반복한다.
        }
    }
    for(int i=7; i>=0; i--){        //결과 값을 출력하기 위한 반복문. 배열에 저장된 값을 거꾸로 출력한다.
    printf("%d",arr[i]);
    }
    return 0;
}