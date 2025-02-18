#include <stdio.h>
int main() {
    unsigned int num;
    // Take user input
    printf("Enter a number: ");
    scanf("%u", &num);
    // Shift the number to the left by 2 bits
    unsigned int shifted_num = num << 2;
    // Print the result
    printf("Original number: %u\n", num);
    printf("Number after shifting 2 bits to the left: %u\n", shifted_num);
    return 0;
}
