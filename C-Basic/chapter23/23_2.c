#include <stdio.h>

typedef struct rectangle{
    int xpos[2];
    int ypos[2];
} Rectangle;

void SizeRect(Rectangle r1){
    printf("사각형의 넓이 : %d\n",(r1.ypos[1]-r1.xpos[1])*(r1.ypos[0]-r1.xpos[0]));
}

void Point(Rectangle r1){
    printf("네 점의 좌표: (%d,%d), (%d,%d), (%d,%d), (%d,%d)\n",r1.xpos[0], r1.ypos[1], r1.ypos[0], r1.ypos[1], r1.xpos[0], r1.xpos[1], r1.ypos[0], r1.xpos[1]);
}
int main(void){
    Rectangle r1;
    scanf("%d %d %d %d", &r1.xpos[0], &r1.xpos[1], &r1.ypos[0], &r1.ypos[1]);


    SizeRect(r1);
    Point(r1);

    return 0;
}