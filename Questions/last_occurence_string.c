#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char str[n];
    for(int i=0;i<n;i++){
        printf("Enter str[%d]:",i);
        scanf(" %c",&str[i]);
    }
   char c;
   int ans=-1;
   printf("Enter c:");
   scanf(" %c",&c);
   
   for(int i=0;i<n;i++){
    if(str[i]==c){
        ans=i;
        break;
    }
   }
   if(ans==-1){
    printf("element is not present :(");
   }
   else printf("element's last occurence is %d",ans);
    return 0;
}