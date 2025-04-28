#include <stdio.h>

int main(){
    int i=1;
    int n =10;
    int sum=0;
    while(i<=n){
        i++;
        sum+=i;
    }
    printf("The value of sum is %d",sum);
    return 0;
}