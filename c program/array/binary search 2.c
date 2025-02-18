 #include<stdio.h>
int main()
{
    int i,n,high,low,mid,key;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value to find:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<high)
    {
        mid=(high+low)/2;
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]==key)
        {
            printf("Element found\n");
            break;
        }
        else
        {
 high=mid-1;
        }
    }
    if(low>high)
        {printf("element is not found");}
    return 0;
}
