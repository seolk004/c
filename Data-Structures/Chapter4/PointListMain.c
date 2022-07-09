#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int WhoIsProcede(int d1, int d2){
    if(d1< d2)
        return 0;
    else 
        return 1;
}

int main(void){
    List list;
    Point compPos;
    Point * ppos;

    ListInit(&list);

    SetSortRule(&list, WhoIsProcede);

    ppos=(Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos=(Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos=(Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos=(Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);

    printf("현재 데이터의 수 : %d \n", LCount(&list));

    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    compPos.xpos=2;
    compPos.ypos=0;

    if(LFirst(&list, &ppos)){
        if(PointComp(ppos, &compPos)==1){
            ppos=LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos)){
            if(PointComp(ppos, &compPos)==1){
                ppos=LRemove(&list);
                free(ppos);
            }
        }
    }

    printf("현재 데이터의 수 : %d \n", LCount(&list));

    if(LFirst(&list, &ppos)){
        ShowPointPos(ppos);

        while(LNext(&list,&ppos))
            ShowPointPos(ppos);
    }
    printf("\n");

    return 0;
}