#include <stdio.h>
int main() {
    int choice;
    int num1, num2, result;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        switch (choice)
        {
            case 1:
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                    {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                    }
                else
                    {
                    printf("Error! Division by zero is not allowed.\n");
                    }
                break;
            case 5:
              result=num1 %num2;
                printf("%d % %d = %d\n",num1,num2,result);
                break;
            case 6:
                result=num1*num1;
                printf("square of %d is %d\n",num1,result);
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    return 0;
}
