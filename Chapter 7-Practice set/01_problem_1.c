#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr=a;

    printf("The value at address %u is %d",ptr+2,*(ptr+2));//ptr+2 will point to 3rd element

    return 0;
}