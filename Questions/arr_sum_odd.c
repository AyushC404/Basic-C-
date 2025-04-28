#include <stdio.h>

int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter arr[%d]:",i);
    scanf("%d",&arr[i]);
}
int sum=0;
for(int i=0;i<n;i++){
    if(i%2!=0){
        sum+=arr[i];
    }
}
printf("Sum of odd indices ");
for(int i=1;i<n;i+=2){
    printf("arr[%d] ",i);
}
printf("is %d",sum);
return 0;
}
