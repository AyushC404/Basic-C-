#include <stdio.h>
#include <string.h>

struct employee 
{ 
int code;
float salary; 
char name[10]; 
}; // semicolon is important 

int main(){
    struct employee e1,e2;
    //e1.name="Ayush";
    /*The above format is wrong because after declaring a char array you can not assign it in main
you can write it by doing equl to before main but after main has started you have to use strcpy*/
    strcpy(e1.name,"Ayush"); 
    e1.salary=54.44;
    e1.code=4511;
    printf("%d,%f,%s",e1.code,e1.salary,e1.name);
    return 0;
}
/*strcpy is used to copy a string into a character array, which is required because 
direct assignment like e1.name = "Ayush"; is not allowed for arrays.*/
