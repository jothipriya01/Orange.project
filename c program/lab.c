

#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int a,factorial;
    printf("Enter the number:");
    scanf("%d",&a);
    factorial=fact(a);
    printf("The factorial of the %d=%d",a,factorial);
    return 0;}


