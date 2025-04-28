#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Ayush";
    printf("The no. of characters in the string are %d\n",strlen(str));/*This chatacter is used to
    count the number of characters in a string exluding the null character*/
    char target[30]; 
    strcpy (target,str);  //target now contains "AYUSH" 
    printf("%s %s",str,target);
    
    return 0;
}