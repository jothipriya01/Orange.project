#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Print each character in the string
    printf("The characters in the string are:\n");
    for(int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
