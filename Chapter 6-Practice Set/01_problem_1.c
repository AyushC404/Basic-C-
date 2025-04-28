#include <stdio.h>

int main(){
    int a=2;
    int*ptr=&a;
    //printf("The adress of a is %p\n",&a);
    printf("The adress of a is %u\n",&a);
    printf("The value of a is %d\n",*ptr);
    return 0;
}