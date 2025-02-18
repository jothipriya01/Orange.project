#include <stdio.h>
int main() {
    int num, count = 0;
// Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    // Count digits using while loop
    do {
        count++;
        num /= 10;
    } while (num != 0);
    // Output the result
    printf("The number of digits is: %d\n", count);
    return 0;
}
