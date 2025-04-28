#include <stdio.h>

int main(){
    char st[4];//String will be made of 3 characters cause last character will be null character
    printf("Enter upto 3 characters:\n");
    scanf("%s",st);//st and &st are the same thing since it is an array


    printf("You entered:%s",st);

    return 0;
}