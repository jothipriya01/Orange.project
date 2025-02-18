#include <stdio.h>

int main()
{
    int num,rightShift,leftShift ;
    printf("Enter an integer: ");
    scanf("%d", &num);
    leftShift = num << 4;
    rightShift = num >> 3;

    printf("Original number: %d\n", num);
    printf("Left shift : %d\n", leftShift);
    printf("Right shift : %d\n", rightShift);
    return 0;
}
