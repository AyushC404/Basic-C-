#include <stdio.h>

int main()
{
    int n,a,b,val;
    printf("Enter n");
    scanf("%d",&n);

    for(int i=1;i< (n*2);i++ ){
        a=i;
        if(i>n)
            a=(2*n) - i;
        for(int j=1;j<n*2;j++){
          b=j;
          if(j>n)
            b=(2*n) - j;
        if(a<=b)
        val=n-a+1;
        else
        val=n-b+1;
        printf("%d ", val);


       }
        printf("\n");
    }

    return 0;
} 
