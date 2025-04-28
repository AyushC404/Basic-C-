#include <stdio.h>

void ptr(int*x){
    printf("The adress of x is %u\n",x);
}
int main(){
    int i=2;
    printf("The address of i is %u\n",&i);
    ptr(&i);
    return 0;
}