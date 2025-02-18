#include <stdio.h>
int main() {
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;  // Area = π * r^2
    circumference = 2 * PI * radius;  // Circumference = 2 * π * r
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}
