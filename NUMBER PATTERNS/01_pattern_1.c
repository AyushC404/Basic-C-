#include <stdio.h>
int main(){
    int i;
    int j;
    int rows;
    printf("Enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=2*i-1;j>=i;j--){
            printf("%d\t",j);
        }        
        printf("\n");
    }
    return 0;
}