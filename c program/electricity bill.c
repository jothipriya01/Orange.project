#include <stdio.h>
int main() {
    int customer_id, units_consumed;
    float total_amount, surcharge, bill_amount;
    char customer_name[50];
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);
    if (units_consumed <= 199) {
        total_amount = units_consumed * 1.20;
    } else if (units_consumed >= 200 && units_consumed < 400) {
        total_amount = units_consumed * 1.50;
    } else if (units_consumed >= 400 && units_consumed < 600) {
        total_amount = units_consumed * 1.80;
    } else {
        total_amount = units_consumed * 2.00;
    }
    if (total_amount > 400) {
        surcharge = total_amount * 0.15;
        bill_amount = total_amount + surcharge;
    } else {
        bill_amount = total_amount;
    }
    if (bill_amount < 100) {
        bill_amount = 100;
    }
    printf("\nElectricity Bill Details:\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Total Amount: Rs. %.2f\n", total_amount);
    printf("Bill Amount (with surcharge if applicable): Rs. %.2f\n", bill_amount);

    return 0;
}
