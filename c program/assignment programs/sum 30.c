#include <stdio.h>
int main() {
    int m, n;
    // Prompt the user for input
    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    // Use conditional statements to determine the value of n
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }
    // Display the result
    printf("The value of n is: %d\n", n);
    return 0;
}
