#include <stdio.h>
int main(){
    int m=11,count=0;
    while(m>0){
        if(m<3)
        m=m-1;
        else if(m<5)
        m=m-2;
        else
        m=m+3;
        count++;
    }
    printf("m=%d\n",m);
    printf("loop runs %d times",count);
    return 0;
}