#include <stdio.h>
int main(void){
    int grade[5][5];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &grade[i][j]);

        }
    }
    for(int i=0; i<4; i++){
        grade[i][4]=grade[i][0]+grade[i][1]+grade[i][2]+grade[i][3];
        grade[4][i]=grade[0][i]+grade[1][i]+grade[2][i]+grade[3][i];
    }
    grade[4][4]=grade[0][4]+grade[1][4]+grade[2][4]+grade[3][4];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d  ", grade[i][j]);

        }
        printf("\n");
    }
    return 0;
}