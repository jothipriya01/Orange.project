#include <stdio.h>

int divide(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero\n");
        return -1; // or any error code
    } else if (num1 < num2) {
        return 0;
    } else if (num1 == num2) {
        return 1;
    } else {
        return 1 + divide(num1 - num2, num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int result = divide(num1, num2);
    printf("%d / %d = %d\n", num1, num2, result);

    return 0;
}





