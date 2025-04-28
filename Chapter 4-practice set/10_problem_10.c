#include <stdio.h>

int main(){
    int not_prime=0;
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n==0 || n==1)
        {
            not_prime=1;
        }
        else{
    for(int i=2;i<n;i++){
        if(n%i==0 && n!=2){
            not_prime =1;
        }
    }
        }

    if(not_prime){
        printf("%d is not prime",n);
    }
    else{
        printf("%d is prime",n);
    }
    return 0;
}
