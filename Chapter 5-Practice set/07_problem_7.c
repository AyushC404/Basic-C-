#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){//This loop runs from 0 to 2
        //i=0----> 1 star
        //i=1----> 3 stars
        //i=2----> 5 stars
        //no_of_stars-----> 2*i+1
        for(int j=0;j<2*i+1;j++){//This for loop prints 2*i+1 stars
            printf("*");
        }
        printf("\n");//This printf prints a new line
    }
    return 0;
}