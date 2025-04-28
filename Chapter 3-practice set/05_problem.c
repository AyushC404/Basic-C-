#include <stdio.h>

int main(){
    int a=4,b=5,c=7,d=9;
    if(a>b && a>c && a>d){
        printf("%d is the greatest number",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest number",b);
    }
    else if(c>b && c>a && c>d){
        printf("%d is the greatest number",c);
    }
    else if(d>b && d>c && d>a){
        printf("%d is the greatest number",d);
    }
    return 0;
}
