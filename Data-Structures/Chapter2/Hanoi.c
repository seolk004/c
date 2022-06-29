#include <stdio.h>

void Hanoi(int num, char a, char b, char c){
     if(num==1){
        printf("원반 1를 %c에서 %c로 이동\n", a, c);
     }
     else {
        Hanoi(num-1, a, c, b);
        printf("원반 %d를 %c에서 %c로 이동\n", num, a, c);
        Hanoi(num-1, b, a, c);
     }
}
int main(void){
    
    Hanoi(3, 'a', 'b', 'c');
    return 0;
}