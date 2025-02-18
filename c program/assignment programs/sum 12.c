#include <stdio.h>
int logicalNot(int x) {
    return (x == 0); // If x is 0, the result is 1; otherwise, it is 0.
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = logicalNot(num);
    printf("Logical NOT of %d is: %d\n", num, result);
    return 0;
}
