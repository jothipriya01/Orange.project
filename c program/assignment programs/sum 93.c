#include <stdio.h>
#include <string.h>
int main() {
    char source[100], destination[100];
    // Input the source string
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  // Reads a string from input
    // Remove the newline character if present
    source[strcspn(source, "\n")] = '\0';
    // Copy the source string to the destination
    strcpy(destination, source);
    // Print the copied string
    printf("The copied string is: %s\n", destination);
    return 0;
}
