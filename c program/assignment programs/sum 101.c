#include <stdio.h>
int main() {
    int numbers[10], sum = 0;
    // Storing the first 10 natural numbers in the array
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }
    // Display the numbers and calculate their sum
    printf("The first 10 natural numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }
    // Print the sum
    printf("\nThe sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
}
