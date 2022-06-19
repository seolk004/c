#include <stdio.h>

struct employee{
    char name[10];
    char idnum[15];
    int pay;
};

int main(void){
    struct employee arr[3];         //구조체 배열 생성

    for (int i=1; i<=3; i++){
        printf("%d번째 직원의 이름, 주민번호, 급여를 입력하세요.\n",i);
        scanf("%s %s %d", &arr[i].name, &arr[i].idnum, &arr[i].pay);        //&구조체 배열이름.멤버변수로 멤버변수에 값을 넣는다.
    }
    for(int i=0; i<3; i++){
        printf("이름: %s \n주민번호 : %s \n급여 : %d\n", arr[i].name, arr[i].idnum, arr[i].pay);
    }

    return 0;
}