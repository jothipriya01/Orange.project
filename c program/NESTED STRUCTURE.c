/*
struct child
{
    int a;
    char c;
};
struct parent
{
    int b;
    struct child c1;

};
int main()
{
 struct parent p1={12,34,'J'};
 printf("value of b=%d",p1.b);
 printf("value of b=%d",p1.c1.a);
 printf("value of b=%c",p1.c1.c);
 return 0;
};
*/





#include<stdio.h>
struct address
{
    int houseno;
    char street[30];
    char city[20];
    int pincode;
};
struct student
{
    int rollno;
    char name[50];
    struct address v;
};
int main()
{
    struct student a1={235,"joe",12,"north street","coimbatore",608308};
    printf("\t\t\student Details\n");
    printf("student rollno:%d\n",a1.rollno);
    printf("student name:%s\n",a1.name);
    printf("\t\tstudent address\n");
    printf("student houseno:%d\n",a1.v.houseno);
    printf("student street:%s\n",a1.v.street);
    printf("student city:%s\n",a1.v.city);
    printf("student pincode:%d\n",a1.v.pincode);
    return 0;
    }





