#include <stdio.h>
int positive(int a[],int n){
    int ans=0;
for(int i=0;i<n;i++){
    if(a[i]>0){
        ans++;
    }
}
return ans;
}
int main(){
    int n;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int positiveNumbers = positive(arr,n);
    printf("#positive numbers = %d",positiveNumbers);
    return 0;
}