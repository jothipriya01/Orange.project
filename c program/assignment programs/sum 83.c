#include <stdio.h>
void rightRotate(int arr[], int n, int k) {
    // To handle cases where k is greater than n
    k = k % n;

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Rotated array: ");
    rightRotate(arr1, n1, k1);
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("Rotated array: ");
    rightRotate(arr2, n2, k2);

    return 0;
}
