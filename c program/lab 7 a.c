#include<stdio.h>
int main()
{
    int n,i,t,ele_found=0;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers in the array:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target element:\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(t==a[i])
        {
            ele_found=1;
            break;
        }
    }
    if(ele_found==1)
    {
        printf("Target is found.");
    }
    else
    {
         printf("Target is not found.");
    }
}

