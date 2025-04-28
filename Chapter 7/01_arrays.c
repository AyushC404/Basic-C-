#include <stdio.h>

int main(){
    int marks[90];//Reserve space to store 90 integers which is from marks[0] to marks[89]
    marks[0]=45;
    marks[1]=90;
    //We can go all the way to marks[89]
    printf("The value of marks 1 and marks 2 is %d,%d",marks[0],marks[1]);
    return 0;
}