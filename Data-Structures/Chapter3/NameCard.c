#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone){
    NameCard * namecard = (NameCard *)malloc(sizeof(NameCard));     //구조체 자료형 동적할당
    *namecard->name = *name;        //입력받은 name의 값을 동적할당받은 구조체 포인터변수에 대입
    *namecard->phone = *phone;      //phone에 대해 같은 작업
    return namecard;                //구조체 포인터(주소) 반환
}

void ShowNameCardInfo(NameCard * pcard){
    printf("%s \n", pcard->name);
    printf("%s \n", pcard->phone);
}

int NameCompare(NameCard * pcard, char * name){
    return strcmp(pcard->name, *name);          //구조체 변수에 있는 값과 입력받은 값의 비교 결과 반환
}

void ChangePhoneNum(NameCard * pcard, char * phone){
    *pcard->phone=*phone;           //입력받은 값을 구조체변수에 저장된 값과 바꾸기
}