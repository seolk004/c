#include <stdio.h>
#include "addPoly.h"

void addPoly(Poly A, Poly B){
    Poly C;
    int i=0;
    int j=0;
    int k=0;
    while(1){
        if(A.poly[i][0]>B.poly[j][0]){
            C.poly[k][0]=A.poly[i][0];
            C.poly[k][1]=A.poly[i][1];
            i++;
            k++;
        }
        if(A.poly[i][0]==B.poly[j][0]){
            C.poly[k][0]=A.poly[i][0];
            C.poly[k][1]=A.poly[i][1]+B.poly[j][1];
            i++;
            j++;
            k++;
        }
        if(A.poly[i][0]<B.poly[j][0]){
            C.poly[k][0]=B.poly[j][0];
            C.poly[k][1]=B.poly[j][1] ;
            j++;
            k++;
        }
        if(C.poly[k][1]==0){
            break;
        }
    }
    printf("덧셈 결과: ");
    for(int a=0; a<=k; a++){
        printf("%dX^%d ", C.poly[a][0],C.poly[a][1]);
        if(a<k){
            printf("+ ");
        }
    }

}