#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    getchar();
    int count=0;
    char str[n];
    printf("Enter string:");
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("The length of the string is %d",count);
    return 0;
}