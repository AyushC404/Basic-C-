#include <stdio.h>

int i=2;
int*j=&i;
int**k=&j;
int main(){
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",**k);
    return 0;
}