#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 srand(time(0));//Initialize random number generator
 int random_number= (rand()%100) +1;//Generate random number between 1 and 100
 int guessed;
 int no_of_guesses=0;
    //printf("Random Number:%d",random_number);//Print the random number
    do{
    printf("Guess the number:");
    scanf("%d",&guessed);
    if(guessed>random_number ){
        printf("Lower number please\n");
    }
    else if(guessed<random_number){
        printf("Higher number please\n");   
    }
    else{
        printf("Congrats!\n");
    }
    no_of_guesses++;
    } while(guessed!=random_number);
    printf("You guessed the number in %d guesses",no_of_guesses);
    return 0; 
}