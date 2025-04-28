#include <stdio.h>
/*Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop*/
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("The first n natural numbers are %d\n",i);
    }
    return 0;
}