#include <stdio.h>
// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    // Display original values
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    // Swap the numbers
    swap(&num1, &num2);
    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
