#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; // Declare a string with maximum size 100
    int len, i;
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Calculate the length of the string
    len = strlen(str);
    // Print characters in reverse order
    printf("String in reverse order:\n");
    for (i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}
