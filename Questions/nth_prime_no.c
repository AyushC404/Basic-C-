#include <stdio.h>
int main(){
    int n,countPrimesSoFar=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=2;countPrimesSoFar<n;i++){
        int countDivisors=0;
        for(int j=1;j<=i;j++){
           if(i%j==0){
            countDivisors++;
           }
        }
        if(countDivisors==2){
            countPrimesSoFar++;
            if(countPrimesSoFar==n){
                printf("%d",i);
            }
        }
    }
    return 0;
}
