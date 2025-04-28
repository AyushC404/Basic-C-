#include <stdio.h>

int main(){
   int arr[3][10];
    for(int j=0;j<10;j++){
        arr[0][j]=2*(j+1);
        arr[1][j]=7*(j+1);
        arr[2][j]=9*(j+1);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}