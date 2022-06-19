#include <stdio.h>

int main(void){
    FILE * fp=fopen("mystory.txt", "wt");           //텍스트,쓰기모드로 개방
    if(fp==NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }
    fputs("#이름: 김설 \n", fp);
    fputs("#주민번호: 000414-******* \n", fp);
    fputs("#전화번호: 010-****-**** \n", fp);
    fclose(fp);
    return 0;
}