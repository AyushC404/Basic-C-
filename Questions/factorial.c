#include <stdio.h>

int factorial(int a){
    if(a==1||a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
    printf("%d! =%d\n",i,factorial(i));
    }
    return 0;
}