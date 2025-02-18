#include<stdio.h>
int factorial (int n)
{
 if(n==1)
 return 1;
 else
 return n*factorial (n-1);
}
 int main()
 {
  int a,fact ;
  printf ("enter the number");
  scanf("%d",&a);
  fact=factorial(a);
  printf("The factorial f% d=%d",a,fact);
  return 0;
 }
