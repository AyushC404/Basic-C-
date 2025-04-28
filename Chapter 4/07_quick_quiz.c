#include <stdio.h>
/*Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.*/

int main(){
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}