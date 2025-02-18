#include <stdio.h>
int main() {
    int rows = 3; // Number of rows
    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Print the same character for each column in the row
        for (int j = 0; j < rows; j++) {
            // Print the character corresponding to the current row (A, B, C, etc.)
            printf("%c ", 'A' + i);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    return 0;
}
