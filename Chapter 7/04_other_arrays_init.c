#include <stdio.h>

int main(){
    int cgpa[3]={9,8,8};
    for(int i=0;i<3;i++){
        printf("The value of array at index %d is %d\n",i,cgpa[i]);
    }
    for(int i=0;i<3;i++){
        printf("cgpa [%d]",i);
        if(i!=2){
            printf(", ");
        }
        else{
            printf(" ");
        }
    }
    printf("are ");
    for(int i=0;i<3;i++){
        printf("%d",cgpa[i]);
        if(i!=2){
            printf(",");
        }    
        
    }
   // printf("cgpa [1], cgpa [2], cgpa [3] are %d,%d,%d\n",cgpa [1], cgpa [2], cgpa [3]);
    return 0;
}