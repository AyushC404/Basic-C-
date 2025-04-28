#include<stdio.h>  
 int main()    
{    
int num =231;
int rem;
while(num!=0){
    rem=num%10;
    printf("%d",rem);
    num=num/10;
} 
return 0;  
}   