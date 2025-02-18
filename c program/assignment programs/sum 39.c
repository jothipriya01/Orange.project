#include <stdio.h>
int stringLength(char str[]) {
    int length = 0;
    // Traverse through the string until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string
    // Calculate the length of the string
    int len = stringLength(str);
    printf("Length of the string is: %d\n", len);
    return 0;
}
