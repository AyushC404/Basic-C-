#include <stdio.h>
int main(){
    int rows;
    printf("Enter the rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=i;j>=1;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}