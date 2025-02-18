#include<stdio.h>
int main()
{
    int size,i,target,e=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
     int a[size];
    printf("enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("Enter the target number:");
    scanf("%d",&target);
    for(i=0;i<size;i++)
    {
        if(target==a[i])
        {
           printf("element found");
        }
        else{
            printf("not found");
        }
    }
    /*if(e==1)
    {
        printf("element found");
    }
  else
        {
            printf("element not found");
        }*/
    return 0;
}
