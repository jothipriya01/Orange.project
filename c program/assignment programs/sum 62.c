#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll_no;
    char name[50];
    float marks;
};
void inputStudentData(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void displayStudentData(struct Student *s, int n) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    inputStudentData(students, n);
    displayStudentData(students, n);
    free(students);
    return 0;
}
