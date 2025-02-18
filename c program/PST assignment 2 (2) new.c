#include <stdio.h>
int main()
 {
    int burgers, fries, sodas;
    float totalBill ;
    printf("Enter number of burgers ($10 each): ");
    scanf("%d", &burgers);
    printf("Enter number of fries ($5 each): ");
    scanf("%d", &fries);
    printf("Enter number of sodas ($3 each): ");
    scanf("%d", &sodas);
    totalBill = (burgers * 10) + (fries * 5) + (sodas * 3);
    printf("\nTotal Bill: $%f\n", totalBill);
    return 0;
}



