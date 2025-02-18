#include <stdio.h>
int main() {
    int rows;
    // Input: number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to generate the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
