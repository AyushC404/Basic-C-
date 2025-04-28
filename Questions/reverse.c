#include <stdio.h>
int main(){
    int a=111,x;
    x=a;
    int rev = 0;
    while (a != 0)
    {
        int rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    printf("Reversed number is %d\n", rev);
    if(rev==x){
        printf("It is a pallidrome");
    }

    return 0;
}
