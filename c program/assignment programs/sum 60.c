#include <stdio.h>
#include <stdlib.h>
struct ArrayStruct {
    int *arr;  // Pointer to an integer array
    int size;  // Size of the array
};
int main() {
    struct ArrayStruct arrayStruct;  // Declare a variable of type struct ArrayStruct
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arrayStruct.arr = (int *)malloc(n * sizeof(int));
    if (arrayStruct.arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arrayStruct.size = n;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arrayStruct.arr[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < arrayStruct.size; i++) {
        printf("%d ", arrayStruct.arr[i]);
    }
    printf("\n");
    free(arrayStruct.arr);
    return 0;
}
