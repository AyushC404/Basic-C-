#include <stdio.h>
//sum_natural(n)= 1+2+3+4+5+...(n-1)+n
//sum_natural(n)=sum_natural(n-1)+n  
int sum_natural(int);
int sum_natural(int a){
    if(a==1){
        return 1;
    }
    return sum_natural(a-1)+ a;
}
int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d\n",n,sum_natural(n));
    return 0;
}