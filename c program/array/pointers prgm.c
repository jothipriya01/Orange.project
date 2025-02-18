#include<stdio.h>
int main()
{
    int a=45;//normal variable declaration
    int *ptr;//pointer variable declaration
    ptr=&a;
    printf("%d\n",a);//printing a value
    printf("%d\n",&a);//printing address of a
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&a));
    printf("%d\n",&ptr);
    return 0;
}
