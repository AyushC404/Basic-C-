#include <stdio.h>

int main(){
    int product =1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product*=i;
    }
    printf("The factorial of %d is %d",n,product);
    return 0;
}