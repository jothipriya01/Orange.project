#include <stdio.h>
int main() {
    int num = 42;
    float fnum = 3.14;
    char character = 'A';
    int *ptr_int = &num;
    float *ptr_float = &fnum;
    char *ptr_char = &character;
    printf("Value of num: %d\n", *ptr_int);
    printf("Value of fnum: %.2f\n", *ptr_float);
    printf("Value of character: %c\n", *ptr_char);
    *ptr_int = 100;
    *ptr_float = 6.28;
    *ptr_char = 'B';
    printf("Updated value of num: %d\n", *ptr_int);
    printf("Updated value of fnum: %.2f\n", *ptr_float);
    printf("Updated value of character: %c\n", *ptr_char);
    printf("Address of num: %p\n", (void *)&num);
    printf("Address of fnum: %p\n", (void *)&fnum);
    printf("Address of character: %p\n", (void *)&character);
    printf("Pointer ptr_int points to: %p\n", (void *)ptr_int);
    printf("Pointer ptr_float points to: %p\n", (void *)ptr_float);
    printf("Pointer ptr_char points to: %p\n", (void *)ptr_char);
    return 0;
}

