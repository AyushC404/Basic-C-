#include <stdio.h>

int main(){
    int a=3;
    int b=4;
    int c=a+b;
    printf("The value of a is %d and the value of b is %d and the sum of a and b is %d\n",a,b,c);
    //Modulus operator is used to get the remainder
    printf("The remainder when b is divided by a is %d",b%a);
    //This does not work for exponentiation in C
    //int d=a^b;
    return 0;
}