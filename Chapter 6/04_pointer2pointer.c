#include <stdio.h>

int main(){
    int i=6;
    int*j=&i;//j is a pointer storing the adress of an integer
    int**k=&j;//k is storing the address of j

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);//* cancels & just like 7 cancels 7 in case of division
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    return 0;
} 