#include <stdio.h> 
void move(int (*arrptr1)[4], int (*arrptr2)[4]){        //배열의 값을 90도 돌리기 위한 함수. 매개변수로 배열 포인터가 두 개 있다.        
  
    for(int i=0; i<4; i++)
       *(arrptr2[i]+3)=*(arrptr1[0]+i);           //arrptr1의 값을 90도 돌려서 arrptr2에 대입
    for(int i=0; i<4; i++)                    
        *(arrptr2[i]+2)=*(arrptr1[1]+i);          //매개변수가 가리키고 있는 배열에 접근해서 배열의 요소의 값을 바꾼다.
    for(int i=0; i<4; i++)
        *(arrptr2[i]+1)=*(arrptr1[2]+i);   
    for(int i=0; i<4; i++)
        *(arrptr2[i]+0)=*(arrptr1[3]+i);

   for(int i=0; i<4; i++)                           //90도 바뀐 값은 arrptr2(arr2)가 갖게되고, 함수를 호출할 때마다 
       *(arrptr1[0]+i)=*(arrptr2[0]+i);             //90도 돌리는 동작을 반복하기 위해 바뀐 값을 다시 arrptr1(arr1)에 대입한다. 
    for(int i=0; i<4; i++)                     
        *(arrptr1[1]+i)=*(arrptr2[1]+i);           
    for(int i=0; i<4; i++)
        *(arrptr1[2]+i)=*(arrptr2[2]+i);   
    for(int i=0; i<4; i++)
        *(arrptr1[3]+i)=*(arrptr2[3]+i);



}
int main(void){
    int arr1[4][4]={ {1,2,3,4},             //int형 정수를 담고있는 배열
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int arr2[4][4];                        //move 함수에서 이동한 결과를 담아 출력할 배열

    move(arr1,arr2);                        //move 함수 호출. 배열의 이름=배열의 시작 주소를 move 함수에 전달
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d  ",arr2[i][j]);      //배열 arr2의 값을 출력
        }
        printf("\n");
    }

     printf("\n");

    move(arr1,arr2);                          //두 번째 함수 호출. 첫 번째 호출 결과에서 한 번 더 회전한다.
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d  ",arr2[i][j]);
        }
        printf("\n");
    }
     printf("\n");

    move(arr1,arr2);                        //세 번째 함수 호출.
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d  ",arr2[i][j]); 
        }
        printf("\n");
    }
     printf("\n");

    
    return 0;
}