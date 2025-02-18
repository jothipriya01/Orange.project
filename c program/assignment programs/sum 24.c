#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int sourceArray[n], destinationArray[n];
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }
    for (i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }
    printf("Elements of the destination array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }
    return 0;
}
