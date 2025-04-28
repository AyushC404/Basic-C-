#include <stdio.h>
int main(){
    int a[2][3]={3,0,0};
    int i=0,j=0;
    for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    printf("%d",a[i][j]);
        return 0;
}