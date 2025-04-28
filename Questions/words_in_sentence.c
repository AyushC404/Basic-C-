#include <stdio.h>
int main(){
    // int n;
    // printf("Enter n:");
    // scanf("%d",&n);
     char str[100];
    printf("Enter sentence:");
    gets(str);
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}