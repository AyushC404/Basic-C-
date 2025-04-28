#include <stdio.h>

int main(){
    /*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop 
counter is initialized to 0.*/
    int i=0;
    while(i<=20){
        if(i>=10){
            printf("%d\n",i);
        }
        i++;
    }
    
    return 0;
}
/*Loop Condition: The while loop continues as long as i is less than or equal to 20.*/
/*Conditional Check Inside the Loop: The if (i >= 10) statement ensures that only numbers 10 
to 20 are printed.*/