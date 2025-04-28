#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int n = 10;
    do
    {
        sum += i;//sum=sum+i
        i++;
    } while (i <= n);
    printf("The value of sum is %d\n", sum);
    return 0;
}