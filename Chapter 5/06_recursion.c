#include <stdio.h>

int factorial(int);//Function prototype
int factorial(int n){
    if (n==1||n==0){//Base condition
        return 1;
    }
    //factorial(n)=factorial(n-1)*n
    return n*factorial(n-1);
}
int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("The factorial of %d is %d",a,factorial(a));

    return 0;
    }
