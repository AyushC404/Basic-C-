#include <stdio.h>

int main(){
    int a = 10; 
if (a = 11) //After if if there is only one statement then there is no need of curly brackets
printf("I am 11"); //You don't need curly brackets if there is only 1
else  
printf("I am not 11"); 
return 0;
}/*If you use a = 11, the if statement will always be true because the assignment expression
 evaluates to the value assigned, which is 11 (a non-zero value, hence true). In that case,
  the output will be "I am 11".*/

/*The condition in the if statement (a = 11) is not checking if a is 11; it's just setting a to 
11 and always evaluates to true.*/
/*Assignment (=): This is used to give a value to a variable. For example, a = 11 sets a to 11.
*/
//== is used for equality check and is a relational operator
