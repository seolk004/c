#include <stdio.h>

int main(void){
    char str[30];

    FILE * fp = fopen("mystory.txt", "rt");         //텍스트, 읽기 모드로 개방
    if(fp==NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }
    while(fgets(str, sizeof(str), fp)!=NULL){       //파일을 문자열 단위로 읽어들여서 그 값이 NULL값이 아닌동안
        printf("%s", str);                          //해당 문자열 출력
    
    if(feof(fp)!=0)
        puts("파일 읽기 완료!");
    else
        puts("파일 읽기 실패!");

    fclose(fp);
    return 0;
}