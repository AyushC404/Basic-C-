#include <stdio.h>
int main(){
    int n,left,right;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    int ascending=1,descending=1;
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    //check ascending
    for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        ascending=0;
       }
    }
    //check descending
    for(int i=0;i<n-1;i++){
       if(arr[i]<arr[i+1]){
        descending=0;
       }
    }
       if((ascending==1||descending==1)){
        printf("The array is sorted");
       }
       else{
        printf("Array is not sorted\n");
       }
       return 0;
}