#include <stdio.h>
int main() {
    int num;
    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Use conditional operator to check if the number is odd or even
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    return 0;
}
