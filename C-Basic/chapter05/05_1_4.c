#include <stdio.h>
int main(void){
    int num;
    printf("정수를 입력하세요.\n");
    scanf("%d", &num);

    printf("%d의 아스키 코드는 %c입니다.\n",num, num);
    return 0;
}