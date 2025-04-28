#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[50];
}Emp;
int main(){
    //typedef int ayush;//typedef creates a new datatype
    //ayush a =88;
   // printf("The value of a is %d",a);
    Emp e1;
    e1.code=45;
    e1.salary=54.54;
    strcpy(e1.name,"Ayush");
    show (e1);
    return 0;
}