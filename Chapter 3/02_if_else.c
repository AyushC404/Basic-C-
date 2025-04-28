#include <stdio.h>

int main()
{
    float a;
    printf("Enter number:\n");
    scanf("%f", &a); // The value of a will be read from user input
    if (a > 5)
    {
        printf("a is indeed greater than 5");//Statement is condition is true
    }
    else
    {
        printf("a is less than or equal to than 5\n");//Statement is condition is false
    }
    return 0;
} /*This code might provide wrong inputs for integer values for example 5.15 will be taken as 5 and
 7.5 will be taken as 7 if you put int float; scanf(%f,&a) then you can provide both float and
 integer outputs just instead of 3 the code will read it as 3.0*/
