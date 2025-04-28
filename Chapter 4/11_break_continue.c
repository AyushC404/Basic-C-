#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i==5){
            //break;//exit the loop now 
            continue;//skip this iteration now
            printf("hello");
        }
        printf("%d\n",i);
    }
return 0;
}
/*The ‘break’ statement is used to exit the loop irrespective of whether the condition is 
true or false Whenever a “break” is encountered inside the loop, the control is sent outside
 the loop*/
 /*The ‘continue’ statement is used to immediately move to the next iteration of the loop. 
 The control is taken to the next iteration thus skipping everything below “continue” 
inside the loop for that iteration. */