#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char str[n];//for null character
    // for(int i=0;i<n;i++){
    //     printf("Enter str[%d]:",i);
    //     scanf(" %c",&str[i]);
    // }
    printf("Enter string:");
    scanf("%s",str);
    char rev[n];//storing null character
    for(int i=0;i<n;i++){
        rev[i]=str[n-i-1];
    }
    rev[n]='\0';
    printf("%s",rev);
    return 0;
}