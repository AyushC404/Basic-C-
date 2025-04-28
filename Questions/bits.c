#include <stdio.h>

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is 0, print 0 immediately
    if (num == 0) {
        printf("0");
    } else {
        // Loop through each bit (assuming a 32-bit integer)
        for (int i = 31; i >= 0; i--) {
            // Use bitwise shift and AND to extract each bit
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
    }

    return 0;
}