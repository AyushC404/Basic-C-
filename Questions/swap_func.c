#include <stdio.h>
int swap(int*a ,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=4;
    int y=5;
    printf("x and y before swapping are %d and %d\n",x,y);
    swap(&x,&y);
    printf("x and y after swapping are %d and %d",x,y);
    return 0;
}