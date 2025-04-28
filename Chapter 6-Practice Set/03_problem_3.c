#include <stdio.h>

void change_value_ten_times(int*);/*As long as the function is above the main function there
is no need to write the function prototype but it is always a good practice to write it in
exams*/
void change_value_ten_times(int*a){
    *a = *a*10;
}
int main(){
    int x=10;
    printf("The value of x is %d\n",x);
    change_value_ten_times(&x);
    printf("The value of x is %d\n",x);
    return 0;
}