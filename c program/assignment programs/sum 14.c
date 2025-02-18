#include <stdio.h>
int main() {
    int number;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Conditional check for positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
