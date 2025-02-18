#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Ensure number is positive for processing
    if (number < 0) {
        number = -number; // Handle negative numbers
    }
    // Calculate the sum of the digits
    while (number > 0) {
        digit = number % 10;   // Extract the last digit
        sum += digit;          // Add it to the sum
        number /= 10;          // Remove the last digit
    }
    // Output the result
    printf("Sum of the digits: %d\n", sum);
    return 0;
}
