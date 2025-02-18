#include <stdio.h>
int main() {
    int n, i, j, num = 1;
    // Input: Number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Generate the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
