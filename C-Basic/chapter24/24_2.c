#include <stdio.h>
 
 long FileByte(FILE * fp){              //파일 사이즈 반환함수. 인자로 파일 구조체 포인터를 받는다.
    long fpos;                          //현재위치 저장용
    long last;                          //파일 크기 저장용

    fpos=ftell(fp);                     //현재 위치를 백업해둔다
    fseek(fp, 0, SEEK_END);             //파일의 끝으로 파일위치지시자를 이동
    last=ftell(fp);                     //끝 위치(크기)를 저장
    fseek(fp, fpos, SEEK_SET);          //백업해둔 원래 위치로 복구

    return last;
 }

 int main(void){
    FILE * fp=fopen("mystory.txt", "rt");
    printf("파일의 바이트크기는 %ld입니다.", FileByte(fp));
    
    fclose(fp);

    return 0;
 }