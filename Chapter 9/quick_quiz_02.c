#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e); // function prototype

void show(struct employee e){
    printf("The code is %d\nThe salary is %f\nThe name is %s",e.code,e.salary,e.name);
}

int main(){
    struct employee e1;
    e1.code=45;
    e1.salary=54.54;
    strcpy(e1.name,"Ayush");
    show (e1);


    return 0;
}