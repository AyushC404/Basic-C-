#include <stdio.h>

void ptr(int i){
    printf("The address of i is %u\n",&i);
    }
int main(){
    int i=2;
    int*x=&i;
    printf("The adress of i is %u\n",x);
    ptr(i);
    return 0;
}