#include <stdio.h>

int main(){
    char str[6];
    for(int i=0;i<5;i++){
        scanf("%c",&str[i]);
        fflush(stdin);//Without this scanf counts enter key also as a character
    }
    str[5]='\0';
    printf("%s",str);
   //scanf("%s",str);
   //printf("%s",str);
    return 0;
}