#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);  // Input number of rows
    for (int i = 0; i < rows; i++) {
        for (char ch = 'A'; ch <= 'C'; ch++) {
            printf("%c ", ch);  // Print characters A to C
        }
        printf("\n");
    }
    return 0;
}
