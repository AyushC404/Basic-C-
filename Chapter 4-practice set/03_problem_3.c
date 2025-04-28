#include <stdio.h>

int main(){
    int n;
    int i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        printf("%d X %d = %d\n",i,n,i*n);
        i++;
    } while(i<=n);
    
    return 0;
}
/*Here's why: In a do while loop, the code inside the loop is executed first before checking 
the loop's condition. This guarantees that the loop body will execute at least one time, 
regardless of whether the condition is true or false initially. After executing the loop body, 
the condition is evaluated, and if it is true, the loop will execute again; if it is false, 
the loop will terminate.*/