#include <stdio.h>

struct employee{
    char name[10];
    char idnum[15];
    int pay;
};

int main(void){
    struct employee e1;     //구조체 변수 생성

    scanf("%s %s %d", &e1.name, &e1.idnum, &e1.pay);            //&구조체변수이름.멤버이름 으로 주소를 가져온다.
    printf("이름: %s \n주민번호 : %s \n급여 : %d\n", e1.name, e1.idnum, e1.pay);

    return 0;
}