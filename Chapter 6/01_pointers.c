#include <stdio.h>

int main(){
    int i=72;
    int*j=&i;//j is a pointer pointing to i (or j is an integer pointer)
    //pointing to i means it is storing the address of i
    printf("The address of i is %p\n",&i);//To see the address we use %p
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&j);
    printf("The address of i is %p\n",*(&j));
    printf("The value at address j is %d\n",*(&i));//The value at address(*) of operator(&) 
    // * asks whats the value and & asks whats the address 
    return 0;
}
//The address of operator (&) is used to obtain the address of a given variable.
//The value at address or * operator is used to obtain the value present at a given memory address