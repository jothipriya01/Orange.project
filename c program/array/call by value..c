#include<stdio.h>
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d\t y=%d\n",*x,*y);
}
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("a=%d\t b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\t b=%d\n",a,b);
    return 0;
}
