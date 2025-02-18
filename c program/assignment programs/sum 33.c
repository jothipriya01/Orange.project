#include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Month %d has 31 days.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Month %d has 30 days.\n", month);
            break;
        case 2:
            printf("Month %d usually has 28 days, 29 in a leap year.\n", month);
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            break;
    }
    return 0;
}
