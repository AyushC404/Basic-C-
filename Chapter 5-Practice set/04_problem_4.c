#include <stdio.h>
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//fibonacci(n)= fibonacci(n-1) + fibonacci(n-2)
int fibonacci(int);
int fibonacci(int a){
    if(a==1|| a==2){
        return a-1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}
    int main(){
        int n;
        printf("Enter value :\n");
        scanf("%d",&n);
        printf("The value of fibonacci sequence at %d is %d\n",n,fibonacci(n));
        return 0;
    }
