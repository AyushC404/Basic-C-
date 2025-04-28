#include <stdio.h>
#include <String.h>

int main(){
    char str_1[100];
    char str_2[100];
    char result[100];

    printf("Enter first string:");
    scanf("%s",&str_1);

    printf("Enter second string:");
    scanf("%s",&str_2);

    strcpy(result,str_1);//Copy str_1 into result
    strcat(result,str_2);//append str_2 to result

    printf("Concatenated string is %s\n",result);

    printf("Length of first string is %d\n",strlen(str_1));
    printf("Length of second string is %d\n",strlen(str_2));

    char copy_string[100];
    strcpy(copy_string,str_1);
    printf("The copied string is %s",copy_string);
    return 0;
}