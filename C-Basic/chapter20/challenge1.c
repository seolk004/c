#include <stdio.h> 

void Move(int (*arrptr1)[4]){        //배열의 값을 90도 돌리기 위한 함수. 매개변수로 배열 포인터가 두 개 있다.        
 
 int arr2[4][4];

     for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                arr2[j][3-i]=arrptr1[i][j];
            }
     }

    for(int i=0; i<4; i++){                        //90도 바뀐 값은 arrptr2(arr2)가 갖게되고, 함수를 호출할 때마다 
        for(int j=0; j<4; j++){
            arrptr1[i][j]=arr2[i][j];
        }
    }

                     //move 함수 호출. 배열의 이름=배열의 시작 주소를 move 함수에 전달
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d  ",arr2[i][j]);      //배열 arr2의 값을 출력
        }
        printf("\n");
    }
    
     printf("\n");

}

int main(void){
    int arr1[4][4]={ {1,2,3,4},             //int형 정수를 담고있는 배열
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};              

 
    Move(arr1);   

    
    return 0;
}