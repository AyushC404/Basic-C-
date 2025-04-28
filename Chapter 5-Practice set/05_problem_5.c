#include <stdio.h>
int main(){
int a=4;
printf("%d %d %d \n", a, ++a, a++); 
return 0;
}
/* 6 6 4 and 4 5 5 both are correct as the compiler ran the program from right to left in the 1st 
case and in the 2nd case the compiler ran the program from left to right*/
// When evaluation order is not defined compiler defines it on it's own