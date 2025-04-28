#include <stdio.h>
int main(){
    int n,left,right;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter index range");
    scanf("%d",&left);
    scanf("%d",&right);
    for(int i=left+1;i<right;i++){
      printf("%d ",arr[i]);
    }
    return 0;
}