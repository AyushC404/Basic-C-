#include <stdio.h>

int sum(int,int);//Function prototype

//Function definition
int sum(int x,int y){//Function definition starts here
//printf("The sum is %d\n",x+y);
return x+y;
}//Function definition ends here
int main(){
    int a=1;
    int b=2;//Don't need to make variables can directly write sum(1,2)

    //int c= a+b;
    //printf("The sum is %d\n",c);
    sum(a,b);//Function call


    int a1=12;
    int b1=13;

    //int c1= a1+ b1;
    //printf("The sum is %d\n",c1;
    int c =sum(a1,b1);//Function call
    printf("The sum is %d",c);

    int a2=20;
    int b2=30;
    //int c2 = sum (a2,b2);
    //printf("The sum is %d\n",c2);

    sum(a2,b2);

    return 0;
}