#include <stdio.h>
#define pi 3.14
int main(){
  int r=6;
  int height=10;
    printf("The area of the circle of radius %d is %f\n",r,pi*r*r);/*Since the area of a circle will
    be in decimals hence we have to use %f instead of %d */
    printf("The volume of the cylinder with radius %d and height %d is %f",r,height,pi*r*r*height);
    return 0;
}