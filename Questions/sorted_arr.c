#include <stdio.h>
int main(){
    int n,left,right;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    int ascending=0,descending=0;
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
       if(arr[i]>=arr[i+1]){
        descending=1;
       }
      else if(arr[i]<=arr[i+1]){
        ascending=1;
       }
    }
       if((ascending==1||descending==1) && (ascending==0||descending==0)){
        printf("The array is sorted");
       }
       else if((ascending==1 && descending==1) || (ascending==0 && descending==0)){
        printf("Array is not sorted\n");
       }
       return 0;
}