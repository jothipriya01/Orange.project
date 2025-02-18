#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        char ch = (i % 2 == 0) ? 'a' + i : 'A' + i;
        for (int j = 0; j < rows; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
