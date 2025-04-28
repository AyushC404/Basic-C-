#include <stdio.h>

int main(){
    int random=10;
    int i;
    do{
    printf("Enter no:\n");
    scanf("%d",&i);
        if(i>random){
            printf("Smaller no. please\n");
        }
        else if(i<random){
            printf("Greater no. please\n");
        }
        else{
            printf("You guessed the no.!\n");
        }   
    }while(i!=random);
    
    return 0;
}