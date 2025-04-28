#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char str[n];
    for(int i=0;i<n;i++){
        printf("Enter str[%d]:",i);
        scanf("%c",&str[i]);
    }
    for(int i=0;i<n;i++){
     if(str[i]>='A'&& str[i]<='Z'){
        str[i]+=32;//GAP BETWEEN ASCII VALUE OF 'A' and 'a' is 22 (A-a=97-65)
     }
    }
    for(int i=0;i<n;i++){
        printf("%c ",str[i]);
    }
    return 0;
}