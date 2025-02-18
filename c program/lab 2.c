//11)	Write a C program to swap two integer values using call by value & call by reference.

#include<stdio.h>
void value(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void ref(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    printf("Enter two values:\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\na=%d\tb=%d\n",a,b);
    value(a,b);
    printf("swapping by call by value:\na=%d\tb=%d\n",a,b);
    ref(&a,&b);
    printf("swapping by call by reference:\na=%d\tb=%d\n",a,b);
}



