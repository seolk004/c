#include <stdio.h>

void Hanoi(int num, char a, char b, char c){
     if(num==1){
        printf("���� 1�� %c���� %c�� �̵�\n", a, c);
     }
     else {
        Hanoi(num-1, a, c, b);
        printf("���� %d�� %c���� %c�� �̵�\n", num, a, c);
        Hanoi(num-1, b, a, c);
     }
}
int main(void){
    
    Hanoi(3, 'a', 'b', 'c');
    return 0;
}