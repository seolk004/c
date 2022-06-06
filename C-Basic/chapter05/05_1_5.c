#include <stdio.h>
int main(void){
    char lett;
    printf("알파벳 하나를 입력하세요.\n");
    scanf("%c", &lett);

    printf("%c의 아스키코드 값은 %d입니다.",lett, lett);
    return 0;

}