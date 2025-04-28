#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C EXAMINATION", rev[17];
    int i = strlen(str), j = 0;

    for (; i >= 0; rev[j++] = str[i--]);

    
    puts(rev);

    return 0;
}