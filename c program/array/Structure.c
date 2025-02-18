#include<stdio.h>
struct student
{
  int rollno;
  char section;
  char name[20];
};
int main()
{
    struct student S1;
    printf("enter the student rollno:");
    scanf("%d,&S1.rollno");
    printf("enter the student name:");
    scanf("%s,S1.name");
    printf("enter the student section:");
    scanf("%c,S1.section");


}
