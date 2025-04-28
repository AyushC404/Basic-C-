#include <stdio.h>

int main (){
    int age=12;
    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%6==0){// For checking equlity(yes or no) we use == because = is assignment operator
        printf("lolz\n");
        printf("Your age is divisible by 6\n");
    }

    return 0;
}//If one of the condition is wrong then that condition result will not be displayed in the output