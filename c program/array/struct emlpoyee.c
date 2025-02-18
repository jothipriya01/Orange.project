#include<stdio.h>
struct employee
{
  char name[20];
  int number;
  float salary;
};
int main()
{
 struct employee E1;
 printf("enter the employee name:");
 scanf("%s",E1.name);
 printf("enter the employee number:");
 scanf("%d",E1.number);
 printf("enter the employee salary:");
 scanf("%f",E1.salary);
}
