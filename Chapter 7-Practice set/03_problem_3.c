#include<stdio.h>

int main(){
    int a[10];
    int n;
    printf("Enter number:");
        scanf("%d",&n);
    for(int i=0;i<10;i++){
        a[i]=n*(i+1);
        printf("%d*%d is %d\n",n,i+1,a[i]);
    }
return 0;
}