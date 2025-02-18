#include <stdio.h>
struct student
 {
    int rollno;
    char name[50];
    int marks[3];
};
int main()
{
    struct student s;
    printf("Enter the roll number: ");
    scanf("%d", &s.rollno);
    printf("Enter the name: ");
    scanf("%s", s.name);
    printf("Enter the marks in three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", &s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks in three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: %d\n", i + 1, s.marks[i]);
    }
    return 0;
}

