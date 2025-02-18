#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows and column:");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],s[r][c];

    printf("\n enter elements of 1st matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
     printf("\n enter elements of 2nd matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
      s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nSum of two matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}













