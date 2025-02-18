#include <stdio.h>
int main() {
    int n = 3;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    num -= n; // Adjust the starting number for the second part
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
        num -= i; // Reset num for each row of the lower half
    }
    return 0;
}
