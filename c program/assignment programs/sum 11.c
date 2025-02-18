#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;            // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append the digit
        num /= 10;                       // Remove the last digit
    }
    printf("Reversed Number: %d\n", reversedNum);
    return 0;
}
