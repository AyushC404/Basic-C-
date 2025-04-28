#include <stdio.h>

int main(){
    int age=23;
    if(age>60){
        printf("The guy is older than 60");
    }
    else if(age>45){
    printf("This guy is less than 70");
}
else if(age>30){
    printf("This guy is in his 30's");
}
else{/*there can be no relational operators inside else ka () relational operators can only be
present with else if and if statements*/
    printf("This guy is below 30");
}

return 0;
}//This is a ladder and agar ek bhi valid he then neeche vale baaki ignore ho jaate he
//This is if else if else ladder
//The last else part is optional
