#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
struct employee facebook[100]; // an array of structures 
// we can access the data using: 
facebook[0].code = 100; 
facebook[1].code = 101; 
// And so on
struct employee yoo = {100, 71.22, "ayush"}; 
struct employee lolz = {0}; //All elements set to 0  
printf("%d,%f,%s",yoo.code,yoo.salary,yoo.name);
return 0;
}