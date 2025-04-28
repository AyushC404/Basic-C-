#include <stdio.h>
int main(){
int tally;
for(tally=0;tally<10;++tally){
printf("#");
if(tally>6)
continue;
printf("%d",tally);
}
    return 0;
}