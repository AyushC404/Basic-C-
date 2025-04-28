#include <stdio.h>
#include <string.h>

int main(){
    char s1[56]="Ayush";
    char s2[56]=" lolz";
    strcat(s1,s2);//s1 now contains"Ayushlolz"<No space in between>
    printf("%s %s\n",s1,s2);


    int a =strcmp("far","ajoke");
    printf("%d",a);
    return 0;
}