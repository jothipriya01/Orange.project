#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if number is less than 2
    if (num <= 1) {
        isPrime = 0; // Not a prime number
    } else {
        // Check for factors
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
    }
    // Conditional output
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
