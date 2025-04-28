#include <stdio.h>

 float c2f(float);
    float c2f(float c){
        return 9*c/5 +32;
    }
    int main(){
        float c;
        printf("Enter celsius :\n");
        scanf("%f",&c);
        printf("%.2f celsius in fahrenheight is %.2f\n",c,c2f(c));//2 integers after decimal

        return 0;
    }
