#include <stdio.h>

int change_value_ten_times(int a){
     return a*10;
}
int main(){
    int i=10;
    printf("The value of i is %d\n",i);
    change_value_ten_times(i);
    printf("The value of i is %d\n",i);
    return 0;
}