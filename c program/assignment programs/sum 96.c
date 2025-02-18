#include <stdio.h>
int main() {
    char str[2];  // Array to hold one character and the null terminator
    printf("Enter a character: ");
    fgets(str, sizeof(str), stdin);
    printf("The ASCII value of '%c' is %d\n", str[0], str[0]);
    return 0;
}
