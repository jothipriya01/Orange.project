#include <stdio.h>
int main() {
    int rows = 5; // You can change this value for a larger or smaller triangle
    for (int i = rows; i > 0; i--) { // Outer loop for rows
        for (int j = 0; j < i; j++) { // Inner loop for stars in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
