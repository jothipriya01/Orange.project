#include<stdio.h>
struct employee
{
  char name[20];
  int idno;
  int phoneno;
  char degree[30];
  int salary;
};
int main()
{
 struct employee E1;
 printf("enter the employee name:");
 scanf("%s",E1.name);
 printf("enter the employee idno:");
 scanf("%d",&E1.idno);
 printf("enter the employee phoneno:");
 scanf("%d",&E1.phoneno);
 printf("enter the employee degree:");
 scanf("%s",E1.degree);
 printf("enter the employee salary:");
 scanf("%d",&E1.salary);
}7
