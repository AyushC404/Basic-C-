#include <stdio.h>
int main(){
    for(int n=2;n<=100;n++){
         int count =0;
        for(int i=2;i<n;i++){
           if(n%i==0 && n!=2){
            count++;
            break;
           }
            }
            if(count==0){
                printf("%d ",n);
            }
        }
    return 0;
    }
