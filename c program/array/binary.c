#include<stdio.h>
int main()
{
    int i,low,high,mid,n,key,array[100];
    printf("Enter a number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d integers n\t",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
        printf("Enter value to find\n");
        scanf("%d",key);
        low=0;
        high=n-1;
        while(low<=high)
        {
        mid=(low+high/2);
        if(array[mid]<key)
            low=mid+1;
        else if(array[mid]==key)
        {
            printf("%d found at location %d.n",key,mid+1);
            break;
        }
        else;
        high=mid-1;

        }

    if(low>high)
  printf("Not found! %d isn't present in the list.n",key);
    return 0;
}
