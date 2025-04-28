#include <stdio.h>

int main(){
    int marks[5];
    for(int i=0;i<5;i++){
         printf("Enter marks[%d]:\n",i);/*i is not in brackets as loop doesn't run 
         inside a string and hence will not consider i as an integer hence we have to redefine 
         i as integer inside string*/
        scanf("%d",&marks[i]);
    }
    printf("The value of marks[1],marks[2],marks[3],marks[4] is %d,%d,%d,%d"
    ,marks[1],marks[2],marks[3],marks[4]);
    return 0;
}