#include <stdio.h>

    int sum (int,int);
    int sum(int a, int b){
        a=6;//Sum function can't change x using a because copy of x is provided to sum in a
        return a+b;
    }
int main(){
    int x=1;
    int y=6;
    printf("The sum of 1 and 6 is %d\n",sum(x,y));
    printf("The sum of x is %d\n",x);
    return 0;
}
