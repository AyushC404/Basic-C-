#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Youe entered 1\n");
        break;
    case 2:
        printf("Youe entered 2\n");
        break;
    case 3:
        printf("Youe entered 3\n");
        break;
    case 4:
        printf("Youe entered 4\n");
        break;
    default:
        printf("Nothing matches\n");
    }
    return 0;
}
/*If break; was not there then if one of the condition matches then the all the statements below 
that statement will be printed*/
