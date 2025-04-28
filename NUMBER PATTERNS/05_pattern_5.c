#include <stdio.h>
int main(){
    int rows;
    printf("Enter the rows:");
    scanf("%d",&rows);
    int k='A';//ASCII VALUE OF A WHICH IS 65 CAN ALSO WRITE INT K =65 OR INT K ='A'
    for(int i=1;i<=rows;i++){
     for (int j = 1; j <= i; j++) {
            printf("%c\t",k);  
        k++;
        }
        printf("\n");

    }
    return 0;
}
