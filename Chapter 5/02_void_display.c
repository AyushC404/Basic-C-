#include <stdio.h>

void display(int x, int y){
    printf("The sum is %d\n",x+y);
    // return x+y if written then will give error in output
}

int main(){
    int a =2;
    int b =3;
    display(a,b);//is not possible to write as int c= display(a,b) code will give error

return 0;
}