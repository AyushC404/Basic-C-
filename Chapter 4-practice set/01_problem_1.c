#include <stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for( int i=1;i<=10;i++){
        printf("%dX%d=%d\n",i,n,i*n);
    }
    return 0;
}