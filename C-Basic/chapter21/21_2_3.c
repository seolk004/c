#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char user1[15];
    char user2[15];
    int space1,space2;
    int result1, result2;

    fgets(user1,sizeof(user1),stdin);
    fgets(user2,sizeof(user2),stdin);

    for(int i=0; i<15; i++){
        if(user1[i]==32){
            space1=i;
            break;
        }
    }
    for(int i=0; i<15; i++){
        if(user2[i]==32){
            space2=i;
            break;
        }
    }

    result1=strncmp(user1, user2,space1);
    result2=strcmp(user1+space1, user2+space2);
    
    printf("두 사용자의 이름은 ");
    if(result1==0)
        printf("같습니다.\n");
    else 
        printf("다릅니다.\n");

    printf("나이는 ");
    if(result2==0)
        printf("같습니다.");
    else
        printf("다릅니다.");
        
    return 0;
}