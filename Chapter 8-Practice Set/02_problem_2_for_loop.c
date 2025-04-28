#include <stdio.h>

int strlen(char str[]){
    for(int i=0;;i++){
        if(str[i]=='\0'){
            return i;//if int i=1 then we have to write return i-1
        }
    }
}
int main(){
    char x[]="Ayush";
    printf("%d",strlen(x));
    return 0;
}