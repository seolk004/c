#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *pos1, Point *pos2){
    Point tmp;
    tmp=*pos1;
    *pos1=*pos2;
    *pos2=tmp;

}

int main(void){
    Point pos1={2,4};
    Point pos2={5,7};

    SwapPoint(&pos1, &pos2);

    printf("pos1: %d %d \npos2: %d %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);

    return 0;
}