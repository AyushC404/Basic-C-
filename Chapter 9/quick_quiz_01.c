#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter code:\n");
    scanf("%d",&e1.code);
    printf("Enter salary:\n");
    scanf("%f",&e1.salary);
    printf("Enter name:\n");
    scanf("%s",&e1.name);//instead of %s don't write %c as it will only allow one character

    printf("Enter code:\n");
    scanf("%d",&e2.code);
    printf("Enter salary:\n");
    scanf("%f",&e2.salary);
    printf("Enter name:\n");
    scanf("%s",&e2.name);

    printf("Enter code:\n");
    scanf("%d",&e3.code);
    printf("Enter salary:\n");
    scanf("%f",&e3.salary);
    printf("Enter name:\n");
    scanf("%s",&e3.name);

    return 0;
}