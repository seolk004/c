#include <stdio.h>
int main(void){
    int leftX, leftY, rightX, rightY;
    int width, length;
    printf("좌 상단의 x, y좌표 : \n");
    scanf("%d %d", &leftX, &leftY);
    printf("우 하단의 x, y좌표 : \n");
    scanf("%d %d", &rightX, &rightY);

    width=leftX-rightX;
    length=leftY-rightY;

    if(width<0){
        width=(-width);
    }
    if(length<0){
        length=(-length);
    }

    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",width*length);

    return 0;

}