#include <stdio.h>
int main(){
char str[80]="hello";
int I;
for(I=0;str[I]!=0;I++);
for(int i=I-1;i>=0;i--){
    printf("%c",str[i]);
}
    return 0;
}