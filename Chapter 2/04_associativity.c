#include <stdio.h>

int main(){
    int a=3;
    int b=6;
    int c=9;
    printf("The values is %d\n",7+a*b/c);/*Always first check operator precedence and then the 
    associativity*/
    printf("The values is %d\n",3*b/2*c+7*a);
    //3*b/2*c+21 first we solved 7*a because the order of * is greater than +
    //18/2*c+21   now we are going from left to right 
    //9*c+21
    //81+21=102
    return 0;

}