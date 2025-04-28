#include <stdio.h>

int main()
{
    int i = 5;
    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11
    // i++ prints i first and then increments
    //++i increments first and then prints i
    i += 2;// same as i=i+2
    printf("The value of i is %d", i); // 13
    return 0;
}
