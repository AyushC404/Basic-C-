#include <stdio.h>

int main(){
    char st[30]; 
     printf("Enter a string (up to 29 characters):");
    gets(st);  //The entered string is stored in st!

    printf("%s",st);
    puts(st); // Prints the string & places the cursor on the next line 
    printf("hey");
    return 0;
}