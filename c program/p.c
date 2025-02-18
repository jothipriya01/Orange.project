#include <stdio.h>

int main() {
    // Declare variables
    int customerID, unitsConsumed;
    float surcharge = 0, totalBill;
    char customerName[50];

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]s", customerName);  // To read the name with spaces

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate the bill based on units consumed
    if (unitsConsumed <= 199) {
        totalBill = unitsConsumed * 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        totalBill = unitsConsumed * 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        totalBill = unitsConsumed * 1.80;
    } else {
        totalBill = unitsConsumed * 2.00;
    }

    // Apply surcharge if bill exceeds Rs. 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15; // 15% surcharge
        totalBill += surcharge;
    }

    // Ensure minimum bill is Rs. 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Output the bill details
    printf("\nElectricity Bill Details:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Bill: Rs. %.2f\n", totalBill);

    return 0;
}
