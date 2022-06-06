#include <stdio.h>

void MaxAndMin(int **max, int **min, int *arr){ //이중포인터 max와 min으로 포인터 maxPtr과 minPtr의 주소를 받는다. 즉 포인터를 가리킨다.
                                                //*arr는 배열 arr의 시작 주소값을 받는다. 포인터의 주소가 아닌 배열의 주소를 받으므로 싱글포인터가 사용되었다.
    for(int i=0; i<4; i++){         //for문으로 배열의 인덱스 값을 바꾼다.
        if(**max<arr[i+1])          //max가 가리키고있는 포인터 maxPtr이 가리키고 있는 배열의 값과 배열의 다음 값을 비교한다.
                                    //arr는 포인터이므로 인덱스를 사용하여 배열의 요소에 접근 할 수 있다.
            *max=&arr[i+1];         //만약 **max값(배열의 값)이 arr[i+1]의 값보다 작다면, 이중포인터 max가 가리키고 있는 싱글포인터(maxPtr)가 가리키는 주소를 arr[i+1]의 주소로 바꾼다.
        if(**min>arr[i+1])          //min이 가리키고있는 포인터 minPtr이 가리키고 있는 배열의 값과 배열의 다음 값을 비교한다.
            *min=&arr[i+1];         //만약 **min값(배열의 값)이 arr[i+1]보다 크면, 이중포인터 min가 가리키고있는 싱글포인터(minPtr)가 가리키는 주소를 arr[i+1]의 주소로 바꾼다.
    }
}

int main(void){
    int * maxPtr;                   //배열 중 가장 큰 값을 가리킬 포인터 maxPtr 선언
    int * minPtr;                   //배열 중 가장 작은 값을 가리킬 포인터 minPtr 선언
    int arr[5]={2, 9, 8, 1, 6};     //int형 배열 arr 선언. 크기는 5
    maxPtr=&arr[0];                 //포인터 maxPtr에 배열 arr의 0번째 요소의 주소값을 대입. 배열의 이름(포인터)가 아닌 인덱스 값을 사용하므로 &연산자 필요
    minPtr=&arr[0];                 //포인터 minPtr에 배열 arr의 0번째 요소의 주소값을 대입.
                                    //배열의 다른 값들과 크기를 비교하기 위해 배열의 첫 번째 값을 넣음.

    MaxAndMin(&maxPtr, &minPtr, arr); //함수 MaxAndMin 호출. 전달 값은 포인터 maxPtr과 minPtr의 주소와 배열 arr(=배열의 이름이므로 포인터. 즉 배열의 시작 주소)

    printf("가장 큰 값: %d\n", *maxPtr);     //maxPtr이 가리키고 있는 공간의 값 출력
    printf("가장 작은 값: %d\n", *minPtr);   //minPtr이 가리키고 있는 공간의 값 출력

    return 0;
}