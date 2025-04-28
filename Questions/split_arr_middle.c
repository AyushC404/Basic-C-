#include <stdio.h>
int main(){
    int n;
    int k;
    int m;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    
    if(n%2==0){
        k=n/2;
        m=n/2;
    }
    else{
        k=(n+1)/2;
        m=n/2;
    }
    int arr_1[k];
    int arr_2[m];
   
    for(int i=0;i<k;i++){
        arr_1[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        arr_2[i]=arr[i+k];
    }
    
    for(int i=0;i<k;i++){
        printf("%d ",arr_1[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++){
        printf("%d ",arr_2[i]);
    }
    
    return 0;
}