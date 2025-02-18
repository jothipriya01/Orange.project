#include <stdio.h>
struct Manager {
    char name[50];
    int employee_id;
    float salary;
};
int main() {
    // Create a variable of type struct Manager to store data
    struct Manager manager;
    printf("Enter manager's name: ");
    fgets(manager.name, sizeof(manager.name), stdin);  // Use fgets to avoid buffer overflow
    printf("Enter manager's employee ID: ");
    scanf("%d", &manager.employee_id);
    printf("Enter manager's salary: ");
    scanf("%f", &manager.salary);
    printf("\nManager Details:\n");
    printf("Name: %s", manager.name);  // No need to add newline, fgets handles it
    printf("Employee ID: %d\n", manager.employee_id);
    printf("Salary: %.2f\n", manager.salary);
    return 0;
}
