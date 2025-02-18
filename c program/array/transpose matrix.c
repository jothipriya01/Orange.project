#include<stdio.h>
void main()
{
    int array []={2,4,8,10};
    int target=8;
    int result=-1;
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++)
    {
        if(array [i]==target)
        {
            result=i;
            break;
        }
    }
}
