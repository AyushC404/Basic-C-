#include <stdio.h>
char*slice(char str[],int m, int n){
        char*ptr1=&str[m];
        char*ptr2=&str[n];

        str=ptr1;
        str[n]='\0';
        return str;
 }


int main(){
    char str[]="Hello lolz";

    printf("%s",slice(str,1,7));
    return 0;
}
    