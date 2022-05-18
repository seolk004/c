#include <stdio.h>
int main(void){
    for(int i=8; i<=20; i++){
        for(int j=7; j>=0; j--){
        printf("%d", i>>j&1);
        }
        printf("\n");
    }
    for(int i=8; i<=20; i++){
        printf("%x\n", i);
    }
    return 0;
}