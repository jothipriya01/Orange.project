#include <stdio.h>
int main() {
    int size = 5; // Change this value for a different square size
    // Outer loop for rows
    for (int i = 0; i < size; i++) {
        // Inner loop for columns
        for (int j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
