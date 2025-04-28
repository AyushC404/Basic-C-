#include <stdio.h>

int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        
        for(int j=0;j<2;j++){
            printf("Enter the value of arr[%d][%d]:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(int i=0;i<30;i++)
    printf("-");
    printf("\n\n\n");
    
    
    for(int i=0;i<2;i++){
        
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


for(int i=0;i<30;i++)
    printf("-");
    printf("\n\n\n");

     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
     }
    
    return 0;
}