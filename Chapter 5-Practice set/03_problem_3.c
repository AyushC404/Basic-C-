#include <stdio.h>

float Force(float);
float Force(float mass){
    return mass*9.8;
}

int main(){
    float m;
    printf("Enter mass:\n");
    scanf("%f",&m);
    printf("The force of attraction on a body of mass %.2f is %.2f\n",m,Force(m));
    return 0;
}