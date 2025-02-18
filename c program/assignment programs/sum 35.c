#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}
int main() {
    int number, originalNumber, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    while (number > 0) {
        remainder = number % 10;           // Extract the last digit
        sum += factorial(remainder);      // Add the factorial of the digit to the sum
        number /= 10;                     // Remove the last digit
    }
    if (sum == originalNumber) {
        printf("%d is a Strong Number.\n", originalNumber);
    } else {
        printf("%d is not a Strong Number.\n", originalNumber);
    }
    return 0;
}
