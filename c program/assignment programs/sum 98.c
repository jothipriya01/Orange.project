#include <stdio.h>
int main() {
    int n, i;
    // Input the number of rows for the table
    printf("Enter the number of rows for the table: ");
    scanf("%d", &n);
    printf("\nNumber\tSquare\n");
    printf("-----------------\n");
    for (i = 1; i <= n; i++) {
        // Print number and its square
        printf("%d\t%d\n", i, i * i); // Using the multiplication operator to calculate the square
    }
    return 0;
}
