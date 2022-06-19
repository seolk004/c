#include <stdio.h>  
int main(void){
    int num;            //입력받을 변수. 배열의 크기를 결정한다.
     int i=1;           //배열에 1씩 커지는 값을 넣기 위한 변수.
    int j;
    int k;              //배열을 한 바퀴 돌고나면 열의 값을 오른쪽에서 왼쪽으로 1 줄인다.
    int a=0;            //배열을 한 바퀴 돌고나면 열의 값을 왼쪽에서 오른쪽으로 1 올린다.

    printf("한 개의 정수를 입력하세요.\n");
    scanf("%d",&num);           //배열의 크기를 결정할 정수를 하나 입력받는다.
    
     int arr[num][num];         //입력받은 정수를 가로세로 크기로 하는 배열 선언. 입력받은 값을 사용하기 위해 여기서 선언했는데, 함수의 맨 앞에서 선언하지 않아도 괜찮은지?
     k=(num-1);                 

    
       while(i<=(num*num)){         //i가 num*num, 즉 배열의 크기만큼의 수가 될 때까지 반복한다.
        for(j=a; j<=k; j++){        //0,0에서 시작해서 행을 따라 오른쪽으로 배열의 크기만큼 간다.
            arr[a][j]=i;            //배열에 i값을 대입한다.
            i++;                    //i값은 한 칸을 이동할 때마다 1씩 커진다.
        }
        i--;                        //가로의 끝과 세로의 시작이 겹쳐서 i값을 1뺀다.
        for(j=a; j<=k; j++){        //가로가 끝난 지점에서 세로로 이동한다.
            arr[j][k]=i;
            i++;
        }
        i--;
        for(j=(k); j>=a; j--){      //위의 세로가 끝난 지점에서 오른쪽에서 왼쪽으로 가로로 이동한다.
            arr[k][j]=i;
            i++;
        }
        i--;
        for(j=(k); j>a; j--){       //아래서 위로 세로로 이동한다. 
            arr[j][a]=i;
            i++;
        }                           //배열의 한 바퀴가 끝난다.
        

        a++;                        //안 쪽으로 이동하기 위해 a값과 k값을 1올린다.
        k--;                        
    }
    
        for(int i=0; i<num; i++){
            for(int j=0; j<num; j++){
                printf("%d  ",arr[i][j]);       //배열을 출력한다.
            }
            printf("\n");
        }
     return 0;
}