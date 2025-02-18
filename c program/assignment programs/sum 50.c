#include <stdio.h>
#include <math.h>
int main() {
    double number;
    int roundedNumber;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double ceilValue = ceil(number);
    double floorValue = floor(number);
    if ((number - floorValue) >= 0.5) {
        roundedNumber = (int)ceilValue;
    } else {
        roundedNumber = (int)floorValue;
    }
    printf("Original number: %.2f\n", number);
    printf("Ceil value: %.2f\n", ceilValue);
    printf("Floor value: %.2f\n", floorValue);
    printf("Rounded number: %d\n", roundedNumber);
    return 0;
}
