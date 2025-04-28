#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]\n",i);
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    int largest_index=0;
    int smallest_index=0;

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            largest_index=i;
        }
        if(smallest>arr[i]){
            smallest=arr[i];
            smallest_index=i;
        }
    }
    printf("The largest element is %d at index arr[%d]\n",largest,largest_index);
    printf("The smallest element is %d at index arr[%d]\n",smallest,smallest_index);
    return 0;
}