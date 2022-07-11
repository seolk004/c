#include <stdio.h>

typedef struct poly{
    int poly[20][2];
} Poly;

void addPoly(Poly A, Poly B){
    Poly C={0};
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
        if(C.poly[k-1][1]==0){
            break;
        }
    }
    printf("덧셈 결과: ");
    for(int a=0; a<=k-2; a++){
        printf("%dX^%d ", C.poly[a][1],C.poly[a][0]);
        if(a<k-2){
            printf("+ ");
        }
    }
    printf("\n");

}

int main(void){
    Poly A={2,1,1,2,0,1};
    Poly B={2,2,0,6};

    addPoly(A,B);

    return 0;

}