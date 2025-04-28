#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char str[n+1];//To store the null character
    printf("Enter string:");
    scanf("%s",str);//Scanf automatically handles the null character inclusion in the string

    char reverse[n+1];//Accounting for null character so +1

    for(int i=0;i<n;i++){
        reverse[i]=str[n-i-1];
    }

    reverse[n]='\0';/*Since string indexing starts from 0 so need to put n index as null character a
    and hence it can have n+1 elements*/
    int palindrome=1;

   for(int i=0;i<n;i++){
    if(reverse[i]!=str[i]){
        palindrome=0;
        break;
    }
   }
   if(palindrome==1){
    printf("It is a palindrome");
   }
   else{
    printf("It is not a palindrome");
   }
   
    return 0;
}