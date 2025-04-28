#include <stdio.h>
//Pointer arithmetic using integer pointer
   /* int main(){
    int a=5;
    int*ptr=&a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;// Increment the pointer (now points to four byte past 'a')
    printf("The value of ptr is %u",ptr);
    return 0;
}*/
//Pointer arithmetic using character pointer
int main(){
    char a='z';
    char*ptr=&a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;// Increment the pointer (now points to one byte past 'a')
    printf("The value of ptr is %u",ptr);
    return 0;
}
