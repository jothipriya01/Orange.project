#include <stdio.h>
int main() {
    int n, num, reversed = 0, rem, binary = 0, original_binary;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (n > 0) {
        rem = n % 2;
        binary = binary * 10 + rem;
        n = n / 2;
    }
    original_binary = binary;
    while (binary > 0) {
        rem = binary % 10;
        reversed = reversed * 10 + rem;
        binary = binary / 10;
    }
    if (original_binary == reversed) {
        printf("Binary representation of %d is %d - Palindrome\n", num, original_binary);
    } else {
        printf("Binary representation of %d is %d - Not a palindrome\n", num, original_binary);
    }
    return 0;
}
