#include <stdio.h>

int main(){
    int a,b,c;
   int arr[3][10];
   printf("Enter a b c\n");
   scanf("%d,%d,%d",&a,&b,&c);
    for(int j=0;j<10;j++){
        arr[0][j]=a*(j+1);
        arr[1][j]=b*(j+1);
        arr[2][j]=c*(j+1);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}