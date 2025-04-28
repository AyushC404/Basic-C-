#include <stdio.h>

int main(){
    //int a=9;
    //int b=2;
    //float c=a/b;// Any arithmetic operation b/w to integers will always yield an integer 
    //printf("The value of a/b is %f",c);// The output will come as 4.0 and not 4.5

    int a=9;
    float b=1.5;
    printf("The value of a/b is %f\n",a/b);/*We see that any arithmetic operation between an integer
    and a float will always result in an output as float*/
    int c=3.5;
    printf("The value of c is %d\n",c);//We can see that 3.5 is demoted to 3 in the output
    int k=3/9;
    printf("The value of k is %d",k);//0.33 is demoted to 0
    return 0;
}
// Operators of higher priority(See handbook) are evaluated first in the abscence of parenthesis