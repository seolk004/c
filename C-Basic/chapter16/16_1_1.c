#include <stdio.h>

int main(void){
    int arr[3][9];

    for(int i=0; i<3; i++){
        for(int j=0; j<9; j++){
            arr[i][j]=(i+2)*(j+1);

            printf("%d  ", arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}