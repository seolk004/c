#include <stdio.h>
#include "NameCard.h"
#include "ArrayList.h"

int main(void){
    NameCard *ptr;
    List list;

    ListInit(&list);


    ptr= MakeNameCard("홍길동", 01011111111);
    LInsert(&list, ptr);

    ptr= MakeNameCard("성춘향", 01022222222);
    LInsert(&list, ptr);

    ptr = MakeNameCard("이몽룡", 01033333333);
    LInsert(&list, ptr);

    if(LFist(&list, &ptr)){
        if(!NameCompare(ptr, "이몽룡")){
            ShowNameCardInfo(ptr);
        }
        else{
            while(LNext(&list, &ptr)){
                if(!NameCompare(ptr, "이몽룡")){
                    ShowNameCardInfo(ptr);
                    break;
                }
            }
        }
    }
    if(LFist(&list, &ptr)){
        if(!NameCompare(ptr, "이몽룡")){
            ChangePhoneNum(ptr, "01012345678");
        }
        else{
            while(LNext(&list, &ptr)){
                if(!NameCompare(ptr, "이몽룡")){
                    ChangePhoneNum(ptr, "01012345678");
                    break;
                }
            }
        }
    }
    if(LFist(&list, &ptr)){
        if(!NameCompare(ptr, "홍길동")){
            LRemove(&list);
        }
        else{
            while(LNext(&list, &ptr)){
                if(!NameCompare(ptr, "홍길동")){
                    LRemove(&list);
                    break;
                }
            }
        }
    }
    if(LFist(&list, &ptr)){
            ShowNameCardInfo(ptr);
        }
        else{
            while(LNext(&list, &ptr)){
                    ShowNameCardInfo(ptr);
                    break;
                
            }
        }
    
}