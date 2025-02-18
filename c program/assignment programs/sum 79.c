#include <stdio.h>
int main() {
    int a, b;
    // Input the range
    scanf("%d", &a);
    scanf("%d", &b);
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            // Print the English representation of numbers between 1 and 9
            switch (n) {
                case 1: printf("one\n"); break;
                case 2: printf("two\n"); break;
                case 3: printf("three\n"); break;
                case 4: printf("four\n"); break;
                case 5: printf("five\n"); break;
                case 6: printf("six\n"); break;
                case 7: printf("seven\n"); break;
                case 8: printf("eight\n"); break;
                case 9: printf("nine\n"); break;
            }
        } else if (n > 9 && n % 2 == 0) {
            // Print "even" for numbers greater than 9 and even
            printf("even\n");
        } else if (n > 9 && n % 2 != 0) {
            // Print "odd" for numbers greater than 9 and odd
            printf("odd\n");
        }
    }
    return 0;
}
