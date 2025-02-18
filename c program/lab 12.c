
//12)	Write a C program to find the average of array elements using Pointers.

#include <stdio.h>
int main()
{
	int Size,i,sum=0;
	printf("Enter the Array size = \n");
	scanf("%d", &Size);
	int arr[Size];
	int *ptr = arr;
	printf("Enter the Array Items = \n");
	for (i=0;i<Size;i++)
	{
		scanf("%d",ptr+i);
	}
	for (i=0;i<Size;i++)
	{
		sum+=*(ptr+i);
	}
	float avg =(float)sum/Size;
	printf("\nThe Sum of Array Items     = %d\n",sum);
	printf("\nThe Average of Array Items = %.2f\n",avg);
}


