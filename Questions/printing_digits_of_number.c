#include <stdio.h>
int main()
{
    int n;
    int rem;
    int array[100]; int arraySize=0;
    printf("Enter n:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        array[arraySize]=rem;
        arraySize++;
        //printf("%d\n", rem);
        n = n / 10;
    }
    for(int i=arraySize-1;i>=0;i--){
        printf("%d\n", array[i]);
    }
    return 0;
}