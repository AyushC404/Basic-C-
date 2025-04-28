#include <stdio.h>

int main(){
    int a=1;
    int b=1;
    if(a&&b){
    printf("both are true\n");
}
//Is same as writing...
if(a){
    if(b){
        printf("Both are true\n");//This is called as nested program or in this case nested if
    }
}
return 0;
}/*As the number of conditions increases, the level of indentation increases. This reduces 
readability. Logical operators come to rescue in such cases.*/
//OR operators are represented by ||  if(a||b)